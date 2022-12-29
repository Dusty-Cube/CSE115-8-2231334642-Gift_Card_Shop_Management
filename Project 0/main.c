#include <stdio.h>
#include <string.h>
#include <dos.h>
#include "SplashScreen.h"
#include "Login.h"
#include "Menu.h"
#define SIZE 50

int main(void)
{
    int option, check;
    splash();

    printf("Hello, User.\n"); sleep(1);
    printf("\nWelcome to Dusty's Gift Card Shop."); sleep(1);
    printf("\nWhat would you like to do?"); sleep(1);
    printf("\n1. Create an account");
    printf("\n2. Login");
    printf("\n3. Exit");
    printf("\n\n> "); scanf("%d", &option);

    if(option == 1)
    {
        option = login(1);
    }

    if(option == 2)
    {
        while(option == 2)
        {
            option = login(2);
            system("cls");
            if(option == 2) option = login(1);
            if(option == 8) option = login(2);
            if(option == 3) break;
            menu();
        }
    }

    if(option == 3)
    {
        system("cls"); sleep(1);
        printf("Have a good day.\n");
    }

    return 0;
}

