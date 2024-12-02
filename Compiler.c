#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 1000

// Function declarations
int isOperator(char *str);
int isSymbol(char c);
int isKeyword(char *str);
int isIdentifier(char *str);
int isNumber(char *str);
void tokenizeFile(FILE *file);

// Function to check if the string is a valid operator
int isOperator(char *str)
{
    const char *operators[] = {
        "+", "-", "*", "/", "%",
        "==", "!=", "<", "<=", ">", ">=",
        "&&", "||", "!", "&", "|", "^", "~",
        "<<", ">>",
        "=", "+=", "-=", "*=", "/=", "%=",
        "&=", "|=", "^=", "<<=", ">>=",
        "++", "--",
        NULL};
    for (int i = 0; operators[i] != NULL; i++)
    {
        if (strcmp(str, operators[i]) == 0)
        {
            return 1; // Found a match
        }
    }
    return 0;
}

// Function to check if the string is a valid symbol
int isSymbol(char c)
{
    // Symbols in C
    char symbols[] = "(){}[];,.";
    for (int i = 0; symbols[i] != '\0'; i++)
    {
        if (c == symbols[i])
        {
            return 1;
        }
    }
    return 0;
}

// Function to check if the string is a valid keyword
int isKeyword(char *str)
{
    const char *keywords[] = {
        "int", "return", "if", "else", "while", "for", "char", "float", "void",
        "break", "continue", "switch", "case", "default", "struct", "typedef",
        "long", "double", "goto", "enum", "sizeof", "const", "volatile", "static",
        "extern", "union", "register", "unsigned", "signed", "short", "long",
        NULL};
    for (int i = 0; keywords[i] != NULL; i++)
    {
        if (strcmp(str, keywords[i]) == 0)
        {
            return 1; // Found a match
        }
    }
    return 0;
}

// Function to recognize identifiers (variable names, function names)
int isIdentifier(char *str)
{
    if (!isalpha(str[0]) && str[0] != '_')
    {
        return 0;
    }
    for (int i = 1; str[i] != '\0'; i++)
    {
        if (!isalnum(str[i]) && str[i] != '_')
        {
            return 0;
        }
    }
    return 1;
}

// Function to recognize numbers (integer, floating point)
int isNumber(char *str)
{
    int dotCount = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '.')
        {
            dotCount++;
        }
        else if (!isdigit(str[i]))
        {
            return 0; // Invalid character for number
        }
    }
    return dotCount <= 1; // Valid if it has one or zero dots
}

// Function to tokenize a file and classify each token
void tokenizeFile(FILE *file)
{
    char line[MAX_LEN];
    char token[MAX_LEN];
    int tokenIndex = 0;

    // Token counters
    int keywordCount = 0, operatorCount = 0, symbolCount = 0;
    int identifierCount = 0, numberCount = 0, stringCount = 0;

    while (fgets(line, sizeof(line), file))
    {
        for (int i = 0; line[i] != '\0'; i++)
        {
            // Skip spaces
            if (isspace(line[i]))
            {
                continue;
            }

            // Handle string literals
            if (line[i] == '"')
            {
                tokenIndex = 0;
                token[tokenIndex++] = line[i++];
                while (line[i] != '\0' && line[i] != '"')
                {
                    token[tokenIndex++] = line[i++];
                }
                token[tokenIndex++] = line[i]; // Include closing "
                token[tokenIndex] = '\0';      // Null-terminate the string
                printf("String: %s\n", token);
                stringCount++;
                continue;
            }

            // Check if the current character is a symbol
            if (isSymbol(line[i]))
            {
                printf("Symbol: %c\n", line[i]);
                symbolCount++;
                continue;
            }

            // Handle negative numbers
            if (line[i] == '-' && isdigit(line[i + 1]))
            {
                tokenIndex = 0;
                token[tokenIndex++] = line[i++];
                while (isdigit(line[i]) || line[i] == '.')
                {
                    token[tokenIndex++] = line[i++];
                }
                token[tokenIndex] = '\0'; // Null-terminate the token
                printf("Number: %s\n", token);
                numberCount++;
                i--; // Adjust index
                continue;
            }

            // Collect multi-character tokens (e.g., identifiers, operators)
            tokenIndex = 0;
            while (line[i] != '\0' && !isspace(line[i]) && !isSymbol(line[i]))
            {
                token[tokenIndex++] = line[i++];
            }
            token[tokenIndex] = '\0'; // Null-terminate the token

            // Classify the token
            if (isOperator(token))
            {
                printf("Operator: %s\n", token);
                operatorCount++;
            }
            else if (isKeyword(token))
            {
                printf("Keyword: %s\n", token);
                keywordCount++;
            }
            else if (isIdentifier(token))
            {
                printf("Identifier: %s\n", token);
                identifierCount++;
            }
            else if (isNumber(token))
            {
                printf("Number: %s\n", token);
                numberCount++;
            }
            else if (strlen(token) > 0)
            {
                printf("Unknown: %s\n", token);
            }

            // Handle backtracking if we skipped a symbol
            if (line[i] != '\0' && isSymbol(line[i]))
            {
                i--;
            }
        }
    }

    // Print counts of known tokens
    printf("\nToken Counts:\n");
    printf("Keywords: %d\n", keywordCount);
    printf("Operators: %d\n", operatorCount);
    printf("Symbols: %d\n", symbolCount);
    printf("Identifiers: %d\n", identifierCount);
    printf("Numbers: %d\n", numberCount);
    printf("Strings: %d\n", stringCount);
}

int main()
{
    char filename[MAX_LEN];

    // Get the filename from the user
    printf("Enter the filename to tokenize: ");
    scanf("%s", filename);

    // Open the file
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Tokenize the file
    tokenizeFile(file);

    // Close the file
    fclose(file);

    return 0;
}
