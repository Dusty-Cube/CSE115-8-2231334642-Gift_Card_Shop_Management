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
        system("cls");
        printf("\n\n\n\n\n\n");
        printf("%40c*********************************\n", ' ');
        printf("%40c**        CREATE ACCOUNT       **\n", ' ');
        printf("%40c*********************************\n", ' ');
        printf("\n\n\n\n\n\n");
        printf("%20c# Good to have you here :) \n\n\n", ' '); sleep(1);
        printf("%20c# First Name> ", ' '); scanf("%s", profiles.first_name);
        printf("%20c# Last Name> ", ' '); scanf("%s", profiles.last_name);
        printf("%20c# Username> ", ' '); scanf("%s", profiles.username);
        printf("%20c# Contact Number> ", ' '); scanf("%s", profiles.phone);
        printf("%20c# Password (max 10 character)> ", ' '); scanf("%s", profiles.password);
        strcpy(uniName, profiles.phone);
        saveInfo = fopen(strcat(uniName, ".dat"), "w");
        status = fwrite(&profiles, sizeof(struct users), 1, saveInfo);
        if(status != 0)
        {
            system("cls");
            printf("\n\n\n\n\n\n");
            printf("%20c# YOU HAVE SUCCESSFULLY CREATED AN ACCOUNT\n", ' '); sleep(1);
            printf("%20c# USE YOUR PHONE NUMBER AND THE PASSWORD TO LOG IN\n", ' ');
            printf("\n\n%20c# PRESS ANY KEY TO CONTINUE TO LOGIN> ", ' '); getch();
            fclose(saveInfo);
            return 2;
        }else
        {
            system("cls");
            printf("\n\n\n\n\n\n");
            printf("%20c# OOPS. SOMETHING WENT WRONG, PLEASE TRY AGAIN.\n", ' ');
        }
    }
    if(n == 2)
    {
        FILE *checkInfo;
        char temPhone[SIZE];
        char temPass[SIZE];
        int exit;
        system("cls");
        printf("\n\n\n\n\n\n");
        printf("%40c*********************************\n", ' ');
        printf("%40c**            LOGIN            **\n", ' ');
        printf("%40c*********************************\n", ' ');
        printf("\n\n\n\n\n\n");
        printf("%20c# Enter your Phone Number> ", ' '); scanf("%s", &temPhone);
        printf("%20c# Enter your password> ", ' '); scanf("%s", &temPass);
        strcpy(uniName, temPhone);
        checkInfo = fopen(strcat(uniName, ".dat"), "r");
        status = fread(&profiles, sizeof(struct users), 1, checkInfo);
        if(status != 0)
        {
            if(strcmp(temPass, profiles.password) == 0)
            {
                system("cls");
                printf("\n\n\n\n\n\n");
                printf("%40c*********************************\n", ' ');
                printf("%40c**            LOGIN            **\n", ' ');
                printf("%40c*********************************\n", ' ');
                printf("\n\n\n\n\n\n");
                printf("%20c# YOU HAVE SUCCESSFULLY LOGGED IN :) ", ' '); sleep(1);
                return 5;
            }else
            {
                system("cls");
                return 0;
            }
        }else
        {
            printf("\n\n%20c  !!!!!!     THERE'S NO ACCOUNT UNDER PHONE NUMBER: %s     !!!!!!\n%20c# PLEASE REGISTER AN ACCOUNT\n", ' ', temPhone, ' ');
            printf("\n%20c# PRESS ANY KEY TO CONTINUE> ", ' '); getch(); system("cls");
            sleep(2);
            return 1;
        }
    }
}
