#define SIZE 50

struct users
{
    char first_name[SIZE];
    char last_name[SIZE];
    char username[SIZE];
    char phone[SIZE];
    char password[11];
};

int login(int n)
{
    FILE *saveInfo;
    char uniName[SIZE];
    struct users profiles;
    int status;

    if(n == 1)
    {
        printf("Good to have you here.\n");
        printf("We are going to need your name to create a new account.\n"); sleep(1);
        printf("Enter your first name> "); scanf("%s", profiles.first_name);
        printf("Enter your last name> "); scanf("%s", profiles.last_name);
        printf("Enter a username> "); scanf("%s", profiles.username);
        printf("Enter your contact number> "); scanf("%s", profiles.phone);
        printf("Enter a password (max 10 character)> "); scanf("%s", profiles.password);
        strcpy(uniName, profiles.phone);
        saveInfo = fopen(strcat(uniName, ".dat"), "w");
        status = fwrite(&profiles, sizeof(struct users), 1, saveInfo);
        if(status != 0)
        {
            printf("You have successfully created an account.\n"); sleep(1);
            printf("Now you can use your phone number and the password to log in.\n");
            printf("\n\nPress any key to continue -"); getch();
            fclose(saveInfo);
            return 2;
        }else
        {
            printf("Oops. Something went wrong, please try again.\n");
        }
    }
    if(n == 2)
    {
        FILE *checkInfo;
        char temPhone[SIZE];
        char temPass[SIZE];
        int exit;
        system("cls");
        printf("Enter your phone number> "); scanf("%s", &temPhone);
        printf("Enter your password> "); scanf("%s", &temPass);
        strcpy(uniName, temPhone);
        checkInfo = fopen(strcat(uniName, ".dat"), "r");
        status = fread(&profiles, sizeof(struct users), 1, checkInfo);
        if(status != 0)
        {
            if(strcmp(temPass, profiles.password) == 0)
            {
                printf("You have successfully logged in."); sleep(1);
                return 5;
            }else
            {
                printf("Invalid password.\n-> Press 1 to try again.\n-> Press 0 to exit.\n"); sleep(3);
                scanf("%d", &exit);
                if(exit == 0) return 3;
                else return 2;
            }
        }else
        {
            printf("There's no account under phone number: %s\nTry again.\n", temPhone);
            sleep(2);
            return 2;
        }
    }
}
