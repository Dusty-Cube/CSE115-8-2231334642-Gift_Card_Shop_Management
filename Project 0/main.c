#include <stdio.h>
#include <string.h>
#include <dos.h>
#include <windows.h>
#include <MMsystem.h>
#include "SplashScreen.h"
#include "Login.h"
#include "Menu.h"

int main(void)
{
    PlaySound(TEXT("song.wav"), NULL, SND_LOOP | SND_ASYNC);
    int option, check, trigger, i, choice = 1;
    splash();
    system("cls");
    printf("\n\n\n\n\n\n");
    printf("%20c# HELLO, USER\n", ' '); sleep(1);
    printf("%20c# WELCOME TO NASIM'S GIFT CARD SHOP\n", ' '); sleep(2);
    printf("\n\n\n\n\n\n");
    printf("%20c# WHAT WOULD YOU LIKE TO DO> ", ' '); sleep(1);
    printf("\n\n%20c1. Create an Account", ' ');
    printf("\n%20c2. Login", ' ');
    printf("\n%20c3. Exit", ' ');
    printf("\n\n%20c>> ", ' '); scanf("%d", &option);
    if(option == 1)
    {
        trigger = login(1);
        trigger = login(2);
        if(trigger == 5) menu();
        else if(trigger == 1)
        {
            trigger = login(1);
            trigger = login(2);
            if(trigger == 1)
            {
                printf("\n\n%20c# You have made multiple mistakes while logging in.", ' '); sleep(1);
                printf("\n%20c# PLEASE RESTART THE PROGRAM\n", ' ');
            }
            else if(trigger == 0)
            {
                while(choice == 1)
                {
                    printf("\n\n%20c# Invalid Password\n", ' ');
                    printf("%20c# PRESS 1 TO TRY AGAIN OR PRESS 0 TO EXIT> ", ' '); scanf("%d", &choice);
                    if(choice == 1)
                    {
                        trigger = login(2);
                        if(trigger == 5) menu();
                    }
                    else if(choice != 1)
                    {
                        printf("\n\n");
                        printf("%20c# ", ' '); system("pause");
                        system("cls"); sleep(1);
                        printf("\n\n\n\n\n\n");
                        printf("%20c**********************************\n", ' ');
                        printf("%20c**        HAVE A GOOD DAY       **\n", ' ');
                        printf("%20c**********************************\n", ' ');
                        printf("\n\n\n\n\n\n");
                        break;
                    }
                }
            }
        }
        else if(trigger == 0)
        {
            while(choice == 1)
            {
                printf("\n\n%20c# Invalid Password\n", ' ');
                printf("%20c# PRESS 1 TO TRY AGAIN OR PRESS 0 TO EXIT> ", ' '); scanf("%d", &choice);
                if(choice == 1)
                {
                    trigger = login(2);
                    if(trigger == 5) menu();
                }
                else if(choice != 1)
                {
                    printf("\n\n");
                    printf("%20c# ", ' '); system("pause");
                    system("cls"); sleep(1);
                    printf("\n\n\n\n\n\n");
                    printf("%20c**********************************\n", ' ');
                    printf("%20c**        HAVE A GOOD DAY       **\n", ' ');
                    printf("%20c**********************************\n", ' ');
                    printf("\n\n\n\n\n\n");
                    break;
                }
            }
        }
    }
    else if(option == 2)
    {
        trigger = login(2);
        if(trigger == 5) menu();
        else if(trigger == 1)
        {
            trigger = login(1);
            trigger = login(2);
            if(trigger == 1)
            {
                printf("%20c# ", ' '); system("pause"); system("cls");
                printf("\n\n%20c# You have made multiple mistakes while logging in.\n", ' '); sleep(1);
                printf("%20c# PLEASE RESTART THE PROGRAM\n", ' ');
            }
            else if(trigger == 0)
            {
                while(choice == 1)
                {
                    system("cls");
                    printf("\n\n\n\n\n\n");
                    printf("%40c*********************************\n", ' ');
                    printf("%40c**            LOGIN            **\n", ' ');
                    printf("%40c*********************************\n", ' ');
                    printf("\n\n\n\n\n\n");
                    printf("\n\n%20c# Invalid Password\n", ' ');
                    printf("%20c# PRESS 1 TO TRY AGAIN OR PRESS 0 TO EXIT> ", ' '); scanf("%d", &choice);
                    if(choice == 1)
                    {
                        trigger = login(2);
                        if(trigger == 5) menu();
                    }
                    else if(choice != 1)
                    {
                        printf("\n\n");
                        printf("%20c# ", ' '); system("pause");
                        system("cls"); sleep(1);
                        printf("\n\n\n\n\n\n");
                        printf("%20c**********************************\n", ' ');
                        printf("%20c**        HAVE A GOOD DAY       **\n", ' ');
                        printf("%20c**********************************\n", ' ');
                        printf("\n\n\n\n\n\n");
                        break;
                    }
                }
            }
            else if(trigger == 5)
            {
                system("cls"); menu();
            }
        }
        else if(trigger == 0)
        {
            while(choice == 1)
            {
                system("cls");
                printf("\n\n\n\n\n\n");
                printf("%40c*********************************\n", ' ');
                printf("%40c**            LOGIN            **\n", ' ');
                printf("%40c*********************************\n", ' ');
                printf("\n\n\n\n\n\n");
                printf("\n\n%20c# Invalid Password\n", ' ');
                printf("%20c# PRESS 1 TO TRY AGAIN OR PRESS 0 TO EXIT> ", ' '); scanf("%d", &choice);
                if(choice == 1)
                {
                    trigger = login(2);
                    if(trigger == 5) menu();
                }
                else if(choice != 1)
                {
                    printf("\n\n");
                    printf("%20c# ", ' '); system("pause");
                    system("cls"); sleep(1);
                    printf("\n\n\n\n\n\n");
                    printf("%20c**********************************\n", ' ');
                    printf("%20c**        HAVE A GOOD DAY       **\n", ' ');
                    printf("%20c**********************************\n", ' ');
                    printf("\n\n\n\n\n\n");
                    break;
                }
            }
        }
    }
    else if(trigger != 1 || trigger != 2)
    {
        printf("\n\n");
        printf("%20c# ", ' '); system("pause");
        system("cls"); sleep(1);
        printf("\n\n\n\n\n\n");
        printf("%20c**********************************\n", ' ');
        printf("%20c**        HAVE A GOOD DAY       **\n", ' ');
        printf("%20c**********************************\n", ' ');
        printf("\n\n\n\n\n\n");
    }
    return 0;
}
