#include <stdio.h>
#include <string.h>
#include <dos.h>
#include "SplashScreen.h"
#include "Login.h"
#include "Menu.h"

int main(void)
{
    int option, check, trigger, i, choice = 1;
    splash();

    printf("Hello, User.\n"); sleep(1);
    printf("Welcome to Nasim's Gift Card Shop."); sleep(1);
    printf("\n\nWhat would you like to do?"); sleep(1);
    printf("\n1. Create an account");
    printf("\n2. Login");
    printf("\n3. Exit");
    printf("\n\n> "); scanf("%d", &option);

    if(option == 1)
    {
        trigger = login(1);
        if(trigger == 2)
        {
            trigger = login(2);
            if(trigger == 5) menu();
        }
    }

    if(option == 2)
    {
        trigger = login(2);
        if(trigger == 1)
        {
            trigger = login(1);
            if(trigger == 2)
            {
                trigger = login(2);
                if(trigger == 0)
                {
                    trigger = login(2);
                }
                if(trigger == 5) menu();
            }
            printf("\n\nYou failed to log in.\nPlease restart the program.\n");
        }else if(trigger == 5) menu();
        else if(trigger == 0)
        {
            trigger = login(2);
            if(trigger == 5)
            {
                menu();
            }
            else if(trigger == 1)
            {
                trigger = login(1);
                if(trigger == 2)
                {
                    trigger = login(2);
                    if(trigger == 0)
                    {
                        trigger = login(2);
                    }
                    if(trigger == 5) menu();
                }
            }
            else
            {
                while(choice == 1)
                {
                    printf("\n\nInvalid Password\n");
                    printf("Press 1 to try again OR Press 0 to exit> "); scanf("%d", &choice);
                    if(choice == 1)
                    {
                        trigger = login(2);
                        if(trigger == 5)
                        {
                            menu();
                            break;
                        }
                    }
                    if(choice != 1)
                    {
                        system("cls"); sleep(1);
                        printf("\n\n\n\n\n\n");
                        printf("%20c*********************************\n", ' ');
                        printf("%20c*        Have a good day.       *\n", ' ');
                        printf("%20c*********************************\n", ' ');
                        printf("\n\n\n\n\n\n");
                        break;
                    }
                }
            }
        }
    }

    if(option != 1 || option != 2)
    {
        system("cls"); sleep(1);
        printf("\n\n\n\n\n\n");
        printf("%20c*********************************\n", ' ');
        printf("%20c*        Have a good day.       *\n", ' ');
        printf("%20c*********************************\n", ' ');
        printf("\n\n\n\n\n\n");
    }

    return 0;
}

