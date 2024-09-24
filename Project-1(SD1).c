#include <stdio.h>
#include <string.h>
void goMain()
{
}

void Route_suggestion_and_selection()
{
    printf("Our Popular Routes : \n");
    printf("1. Abdullahpur - Mirpur - Mohammadpur\n");
    printf("2. Abdullahpur - Mohakhali - Mohammadpur\n");
    printf("3. Abdullahpur - Badda - Gulistan\n");
    printf("4. Abdullahpur - Firmgate - Gulistan\n");
    printf("5. Mirpur-12 - Firmgate - Gulistan\n");
    printf("6. Mirpur-10 - Science Lab - Gulistan\n\n");
    printf("-------------------------------------------");
}

void Bus_info()
{
    Route_suggestion_and_selection();

    printf("\n\nPlease select your routes : ");
    int selected_route;
    scanf("%d", &selected_route);

    printf("\nHere are those buses on this route: \n");
    switch (selected_route)
    {
    case 1:
        printf("01. Projapoti \n02. Porijthan");
        break;
    case 2:
        printf("01. Alif\n02. Bhuiya");
        break;
    case 3:
        printf("01. Akash\n02. Victor Classic \n03. Akash (AC) ");
        break;
    case 4:
        printf("01. Bangbandhu Avenue");
        break;
    case 5:
        printf("01. Shikor\n02. Bihongo");
        break;
    case 6:
        printf("01. Tanzil\n02. Dishari\n03.Trans-silva ");
        break;
    }
}

void Ticket_price()
{
    Bus_info();
    printf("\n\nPlease select a bus : ");
    int choice;
    scanf("%d", &choice);

    printf("\nHere are the ticket price on those routes : \n");
    switch (choice)
    {
    case 1:
        printf("01. Short Distance(500m-2km):- 10tk \n02. Short Distance(2km-3km):- 20tk\n03. Medium Distance(3km-5km):- 30tk\n04. Medium Distance(5km-7km):- 40tk\n05. Long Distance(8km-10km):- 50tk\n[Students will get a half pass!]");
        break;
    case 2:
        printf("01. Short Distance(500m-2km):- 10tk \n02. Short Distance(2km-3km):- 20tk\n03. Medium Distance(3km-5km):- 30tk\n04. Medium Distance(5km-7km):- 40tk\n05. Long Distance(8km-10km):- 50tk\n[Students will get a half pass!]");
        break;
    case 3:
        printf("                    * Exclusive Bus*\n    Short Distance(500m-2km):- 10tk \n    Short Distance(2km-3km):- 20tk\n    Medium Distance(3km-5km):- 30tk\n    Medium Distance(5km-7km):- 40tk\n    Long Distance(8km-10km):- 50tk\n[Students won't get a half pass!]\n\n\n\n\n                    * AC Bus***\n    Short Distance(500m-2km):- 20tk \n    Short Distance(2km-3km):- 40tk\n    Medium Distance(3km-5km):- 60tk\n    Medium Distance(5km-7km):- 80tk\n    Long Distance(8km-10km):- 100tk\n[Students won't get a half pass!]");
        break;
    case 4:;
        break;
    }
}

void Hotel_suggestion()
{
    printf("\n\nName of all the Stoppages of Dhaka city\n");
    printf("01. Abdullahpur \n");

    printf("02. Uttara\n");

    printf("03. Airpot\n");

    printf("04. Mirpur 12 \n");

    printf("05. Mirpur 01\n");

    printf("06. Mohammadpur\n");

    printf("07. Gulistan\n");

    printf("08. Shantinagar\n");

    printf("09. HateerHjeel\n");

    printf("10. NotunBazar\n");

    printf("11. JamunaFuturePark\n");

    printf("12. BanglaMotor\n");

    printf("13. KarwanBazar\n");

    printf("14. FarnGate\n");

    printf("15. Banani\n");

    printf("17. Murpur 10 \n");

    printf("18. Gabtoli\n");

    printf("19. MainMenu");

    printf("\nchoice one stoppage to know about that area's hotel with rating: \n");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\n\n01. hotel abdullahpur garden- 4.70\n2. hotel abdullahpur international - 3.8 \n03. Hotel city palace - 4.3\n");
        break;
    case 2:
        printf("\n\n01. Nice look international(3.5)\n02. Hotel royal blue racidence(4.4)\n03. Hotel Blue Bird(3.7)\n\n");
        break;
    case 3:
        printf("\n\n 01. Hotel sahajalal international(3.6)\n02. Holiday express(4.0)\n03. La meridian(4.8)\n04. Regency(4.9)\n\n");
        break;
    case 4:
        printf("\n\n Hotel sikder recidencial(3.9)\n02. Grand prince hotel(4.2)\n03. Hotel prime (3.8)");
        break;
    case 5:
        printf("\n\n1. Hotel city international(4.3)\n02. Hotel Al makkah(5.0)\n03. Hotel random(3.8)");
        break;
    case 6:
        printf("\n\n01. Hotel mohammadpur(4.6)\n02. Hotel muna international(4.0)\n03. Hotel rose haven(4.7)");
        break;
    case 7:
        printf("\n\n01. Hotel Purbasa(4.5)\n02. HOtel romna(4.7)\n03. Hotel Grand hyatt(4.7)");
        break;
    case 8:
        printf("\n\n01. Hotel Provat(3.7)\n02. Hotel ornat(3.9)\n03. Hotel victory(2.2)");
        break;
    case 9:
        printf("\n\n01. Nishat hotel(5.0)\n02. shinepukur(3.2)\n03. Hotel rose(2.2)");
        break;

    case 10:
        printf("\n\n01. bloosom(4.5)\n02. Asia pacific(4.2)\n03. Hotel west valley(4.3)");
        break;
    case 11:
        printf("\n\n01. Hotel pragati(4.0)\n02. Babylon hotel(3.3)\n03. gulpata(4.1)");
        break;
    case 12:
        printf("\n\n01. Dhaka ragency(4.4)\n02. The royal paradise(5.0)\n03. The way dhaka(4.4)");
        break;
    case 13:
        printf("\n\n01. Sonagoan hotel(4.9)\n02. hotel royal bengal(4.3)\n03. Hotel bengal Blueberry(4.3)");
        break;
    case 14:
        printf("\n\n01. Hotel city Hotel international(4.2)\n02. Hotel labbaik(3.5)\n03. Hotel la vinchi(4.2)");
        break;
    case 15:
        printf("\n\n01. The westin dhaka - 4.9\n02. Hotel need - 4.5\n03. Maya Eco apartment - 4.2");
        break;
    case 16:
        printf("\n\n01. Hotel Shikder - 3.9\n02. Hotel singapur guest house - 4.3\n03. Hotel Arnob - 3.44");
        break;
    case 17:
        printf("\n\n01. Mery guest house - 3.8\n02. Hotel nondini - 4.2\n03. Chaya bithi - 3.9");
        break;
    case 18:
        printf("\n\n\n01. Hotel grand Royal(4.3)\n02. Hotel labbaik Dhanmondi(3.3)\n03. Hotel royal palace(4.8)\n\n");
        break;

    default:
        printf("Invalid choice \n");
    }
}

void Popular_destination()
{
    printf("\n\nName of all the Stoppages of Dhaka city\n");
    printf("01. Abdullahpur \n");

    printf("02. Uttara\n");

    printf("03. Airpot\n");

    printf("04. Mirpur 12 \n");

    printf("05. Mirpur 01\n");

    printf("06. Mohammadpur\n");

    printf("07. Gulistan\n");

    printf("08. Shantinagar\n");

    printf("09. HateerHjeel\n");

    printf("10. NotunBazar\n");

    printf("11. JamunaFuturePark\n");

    printf("12. BanglaMotor\n");

    printf("13. KarwanBazar\n");

    printf("14. FarnGate\n");

    printf("15. Banani\n");

    printf("16. Murpur 10 \n");

    printf("17. Gabtoli\n");

    printf("18. MainMenu\n");

    int choice;
    printf("Select your area to see the popular destination: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("\n1.Nikil beribadh\n2.Balikhola\n3.Nikil Haor\n");
    }
    else if (choice == 2)
    {
        printf("\n1.Diabari lake \n2.Diabari Triangle \n3.Trouvaile\n");
    }
    else if (choice == 3)
    {
        printf("\n1.Hazicamp \n2.Kawla kalimandir \n3.Aambagan Mosque\n");
    }
    else if (choice == 4)
    {
        printf("\n1.Tourist club Mirpur \n2.D-block Eidgah Maidan \n3.Sherebangla Cricket Stadium\n");
    }
    else if (choice == 5)
    {
        printf("\n1.Nationl Museum \n2.Botanical Garden\n");
    }
    else if (choice == 6)
    {
        printf("\n1.bottola \n2.Rayer Bazar Bodhyo Bhumi \n3.Mohammadpur Park\n");
    }
    else if (choice == 7)
    {
        printf("\n1.Baitulmakaram Mouque \n2.Bangabandhu Stadium \n3.Gulistan park\n");
    }
    else if (choice == 8)
    {
        printf("\n1.Siddheswari kali mandir \n2.VNC \n3.Ramna park\n");
    }
    else if (choice == 9)
    {
        printf("\n1.Hatirjheel lake\n");
    }
    else if (choice == 10)
    {
        printf("\n1.Gokart Courtside \n2.Create Car\n");
    }
    else if (choice == 11)
    {
        printf("\n1.Jamuna Future Park \n2.Gulshan lake park \n3.Baridhara pond\n");
    }
    else if (choice == 12)
    {
        printf("\n1.National Musume \n2.Tsc \n3.Shawardi uddan\n");
    }
    else if (choice == 13)
    {
        printf("\n1.Bashundhara Shopping mall \n2.Tonggi Fun world\n");
    }
    else if (choice == 14)
    {
        printf("\n1.Ananda cinema hall \n2. bangabandhu military museum \n3. Bangladesh Jatiya Sangshad\n");
    }
    else if (choice == 15)
    {
        printf("\n1. Banani park \n2. Banani lake\n");
    }
    else if (choice == 16)
    {
        printf("\n1.National Cricket Stadium\n");
    }
    else if (choice == 17)
    {
        printf("\n1. Gabtoli hatt \n2. Gabtoli nodi\n");
    }

    else
    {
        printf("invalid number");
    }
}

void Feedback()
{
    char feedback_text[1000];
    printf("Welcome to our app!\n");
    printf("Please provide your feedback: ");
    // gets(feedback_text);
    fgets(feedback_text, sizeof(feedback_text), stdin);
    getchar();
    printf("Thank you for your feedback:%s\n", feedback_text);
}

struct User
{
    char username[100];
    char password[100];
};

struct User users[1000];

int userCount = 0;

void registerUser()
{
    if (userCount >= 1000)
    {
        printf("Can't register more \n");
        return;
    }

    printf("Enter username: ");
    scanf("%s", users[userCount].username);
    printf("Enter password: ");
    scanf("%s", users[userCount].password);

    userCount++;
    printf("Registration successful\n");
}

int loginUser()
{
    char username[100];
    char password[100];

    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    for (int i = 0; i < userCount; i++)
    {
        int match = 1;

        for (int j = 0; users[i].username[j] != '\0' && username[j] != '\0'; j++)
        {
            if (users[i].username[j] != username[j])
            {
                match = 0;
                break;
            }
        }

        if (match)
        {
            for (int j = 0; users[i].password[j] != '\0' && password[j] != '\0'; j++)
            {
                if (users[i].password[j] != password[j])
                {
                    match = 0;
                    break;
                }
            }

            if (match)
            {
                printf("Welcome back, %s!\n", username);
                return 1;
            }
        }
    }

    printf("Login failed\n");
    return 0;
}

int main()
{
    int choice = 0;
    int loggedIn = 0;

    while (choice != 3)
    {
        if (!loggedIn)
        {
            printf("\nMenu:\n");
            printf("1. Register\n");
            printf("2. Login\n");
            printf("3. Exit\n");
            printf("\nYour choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                registerUser();
                break;
            case 2:
                loggedIn = loginUser();
                break;
            case 3:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice \n");
            }
        }
        else
        {
            printf("\nMenu:\n");
            printf("1. Route Suggestion and Selection\n");
            printf("2. Bus info\n");
            printf("3. Ticket Price\n");
            printf("4. Hotel Suggestion\n");
            printf("5. Popular Destination\n");
            printf("6. User Feedback\n");
            printf("7. Logout\n");
            printf("Your choice: ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                Route_suggestion_and_selection();
                break;
            case 2:
                Bus_info();
                break;
            case 3:
                Ticket_price();
                break;
            case 4:
                Hotel_suggestion();
                break;
            case 5:
                Popular_destination();
                break;
            case 6:
                Feedback();
                break;
            case 7:
                loggedIn = 0;
                break;
            default:
                printf("Invalid choice \n");
            }
        }
    }

    return 0;
}