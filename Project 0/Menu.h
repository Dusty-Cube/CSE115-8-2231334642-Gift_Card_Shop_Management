#define SIZE 150

void menu(void)
{
    int choice, trigger;

    system("cls");
    printf("Select the card you wanna purchase -\n");
    printf("\n1. Google Play");
    printf("\n2. Amazon");
    printf("\n3. Apple Gift Card");
    printf("\n4. PlayStation");
    printf("\nPRESS 0 TO EXIT");
    printf("\n\n>> "); scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        {
            system("cls");
            trigger = googlePlay();
            if(trigger == 1)
            {
                menu(); break;
            }else if(trigger == 2)
            {
                menu(); break;
            }else if(trigger == 3)
            {
                menu(); break;
            }else if(trigger == 0) break;
        }
    case 2:
        {
            system("cls");
            trigger = amazon();
            if(trigger == 1)
            {
                menu(); break;
            }else if(trigger == 2)
            {
                menu(); break;
            }else if(trigger == 3)
            {
                menu(); break;
            }else if(trigger == 0) break;
        }
    case 3:
        {
            system("cls");
            trigger = apple();
            if(trigger == 1)
            {
                menu(); break;
            }else if(trigger == 2)
            {
                menu(); break;
            }else if(trigger == 3)
            {
                menu(); break;
            }else if(trigger == 0) break;
        }
    case 4:
        {
            system("cls");
            trigger = playstation();
            if(trigger == 1)
            {
                menu(); break;
            }else if(trigger == 2)
            {
                menu(); break;
            }else if(trigger == 3)
            {
                menu(); break;
            }else if(trigger == 0) break;
        }
    case 0:
        {
            system("cls");
            printf("\n\n\n\n\n\n");
            printf("%20c*********************************\n", ' ');
            printf("%20c*        Have a good day.       *\n", ' ');
            printf("%20c*********************************\n", ' ');
            printf("\n\n\n\n\n\n");
            break;
        }
    default:
        {
            printf("Please select the available options.\n"); sleep(2); system("cls");
            menu();
        }
    }
}
int googlePlay(void)
{
    int i, k, l, choice, price = 545, check;
    char code[SIZE], line[SIZE];
    FILE *googleplay5;
    googleplay5 = fopen("googleplay5.txt", "r+");
    FILE *inI;
    inI = fopen("googleplay_i.txt", "r");
    fscanf(inI, "%d", &i);
    FILE *outI;
    outI = fopen("googleplay_i.txt", "w");
    FILE *inK;
    inK = fopen("googleplay_k.txt", "r");
    fscanf(inK, "%d", &k);
    FILE *outK;
    outK = fopen("googleplay_k.txt", "w");

    printf("\n\n\n\n");
    printf("%20c Serial %10c Value %10c Price(BDT) %10c In-stock\n\n", ' ', ' ', ' ', ' ');
    printf("%22c 1. %13c $5 %15c %d %17c %d\n", ' ', ' ',  ' ', price, ' ', i);

    printf("\n\n\n\nPress 1 to buy $5 google play gift card> "); scanf("%d", &choice);
    if(i == 0)
    {
        fprintf(outI, "%d", i); fprintf(outK, "%d", k);
        fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(googleplay5);
        printf("\n\nSorry, we've run out of Google Play $5 gift cards.\n"); sleep(1);
        printf("Press any key to continue to main menu> \n"); getch(); system("cls");
        return 3;
    }
    if(choice == 1)
    {
        check = payment(price);
        if(check == 1)
        {
            l = 0;
            fgets(line, SIZE, googleplay5);
            for(k; k>= 0; ++k)
            {
                code[l] = line[k];
                if(line[k] == ' ')
                {
                    ++k;
                    break;
                }
                ++l;
            }
            fprintf(outK, "%d", k);
            --i;
            fprintf(outI, "%d", i);
            fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(googleplay5);
            printf("\n\n\n\n");
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******           Code> %s          *************\n", ' ', code);
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******       PLEASE WRITE DOWN THE CODE SOMEWHERE    *************\n", ' ');
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******************************************************************\n", ' ');
            printf("\n\nPress any key to continue."); getch();
            printf("\n\nMake sure to write down the code.\n"); sleep(1);
            printf("Press any key> "); getch(); return 1;
        }
        else if(check == 3)
        {
            fprintf(outI, "%d", i); fprintf(outK, "%d", k);
            fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(googleplay5); return 2;
        }
        else if(check == 0)
        {
            fprintf(outI, "%d", i); fprintf(outK, "%d", k);
            fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(googleplay5); return 0;
        }
    }
    else
    {
        system("cls");
        fprintf(outI, "%d", i); fprintf(outK, "%d", k);
        fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(googleplay5);
        printf("Please press 1 to buy the product.\n"); sleep(2); system("cls"); return 2;
    }
}
int amazon(void)
{
    int i, k, l, choice, price = 574, check;
    char code[SIZE], line[SIZE];
    FILE *amazon5;
    amazon5 = fopen("amazon5.txt", "r+");
    FILE *inI;
    inI = fopen("amazon_i.txt", "r");
    fscanf(inI, "%d", &i);
    FILE *outI;
    outI = fopen("amazon_i.txt", "w");
    FILE *inK;
    inK = fopen("amazon_k.txt", "r");
    fscanf(inK, "%d", &k);
    FILE *outK;
    outK = fopen("amazon_k.txt", "w");

    printf("\n\n\n\n");
    printf("%20c Serial %10c Value %10c Price(BDT) %10c In-stock\n\n", ' ', ' ', ' ', ' ');
    printf("%22c 1. %13c $5 %15c %d %17c %d\n", ' ', ' ',  ' ', price, ' ', i);

    printf("\n\n\n\nPress 1 to buy $5 Amazon gift card> "); scanf("%d", &choice);
    if(i == 0)
    {
        fprintf(outI, "%d", i); fprintf(outK, "%d", k);
        fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(amazon5);
        printf("\n\nSorry, we've run out of Amazon $5 gift cards.\n"); sleep(1);
        printf("Press any key to continue to main menu> \n"); getch(); system("cls");
        return 0;
    }
    if(choice == 1)
    {
        check = payment(price);
        if(check == 1)
        {
            l = 0;
            fgets(line, SIZE, amazon5);
            for(k; k>= 0; ++k)
            {
                code[l] = line[k];
                if(line[k] == ' ')
                {
                    ++k;
                    break;
                }
                ++l;
            }
            fprintf(outK, "%d", k);
            --i;
            fprintf(outI, "%d", i);
            fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(amazon5);
            printf("\n\n\n\n");
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******           Code> %s          *************\n", ' ', code);
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******       PLEASE WRITE DOWN THE CODE SOMEWHERE    *************\n", ' ');
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******************************************************************\n", ' ');
            printf("\n\nPress any key to continue."); getch();
            printf("\n\nMake sure to write down the code.\n"); sleep(1);
            printf("Press any key> "); getch(); return 1;
        }
        else if(check == 3)
        {
            fprintf(outI, "%d", i); fprintf(outK, "%d", k);
            fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(amazon5); return 2;
        }
        else if(check == 0)
        {
            fprintf(outI, "%d", i); fprintf(outK, "%d", k);
            fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(amazon5); return 0;
        }
    }
    else
    {
        system("cls");
        fprintf(outI, "%d", i); fprintf(outK, "%d", k);
        fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(amazon5);
        printf("Please press 1 to buy the product.\n"); sleep(2); system("cls"); return 2;
    }
}
int apple(void)
{
    int i, k, l, choice, price = 1200, check;
    char code[SIZE], line[SIZE];
    FILE *apple10;
    apple10 = fopen("apple10.txt", "r+");
    FILE *inI;
    inI = fopen("apple_i.txt", "r");
    fscanf(inI, "%d", &i);
    FILE *outI;
    outI = fopen("apple_i.txt", "w");
    FILE *inK;
    inK = fopen("apple_k.txt", "r");
    fscanf(inK, "%d", &k);
    FILE *outK;
    outK = fopen("apple_k.txt", "w");

    printf("\n\n\n\n");
    printf("%20c Serial %10c Value %10c Price(BDT) %10c In-stock\n\n", ' ', ' ', ' ', ' ');
    printf("%22c 1. %13c $10 %15c %d %17c %d\n", ' ', ' ',  ' ', price, ' ', i);

    printf("\n\n\n\nPress 1 to buy $10 Apple gift card> "); scanf("%d", &choice);
    if(i == 0)
    {
        fprintf(outI, "%d", i); fprintf(outK, "%d", k);
        fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(apple10);
        printf("\n\nSorry, we've run out of Apple $10 gift cards.\n"); sleep(1);
        printf("Press any key to continue to main menu> \n"); getch(); system("cls");
        return 0;
    }
    if(choice == 1)
    {
        check = payment(price);
        if(check == 1)
        {
            l = 0;
            fgets(line, SIZE, apple10);
            for(k; k>= 0; ++k)
            {
                code[l] = line[k];
                if(line[k] == ' ')
                {
                    ++k;
                    break;
                }
                ++l;
            }
            fprintf(outK, "%d", k);
            --i;
            fprintf(outI, "%d", i);
            fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(apple10);
            printf("\n\n\n\n");
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******           Code> %s          *************\n", ' ', code);
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******       PLEASE WRITE DOWN THE CODE SOMEWHERE    *************\n", ' ');
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******************************************************************\n", ' ');
            printf("\n\nPress any key to continue."); getch();
            printf("\n\nMake sure to write down the code.\n"); sleep(1);
            printf("Press any key> "); getch(); return 1;
        }
        else if(check == 3)
        {
            fprintf(outI, "%d", i); fprintf(outK, "%d", k);
            fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(apple10); return 2;
        }
        else if(check == 0)
        {
            fprintf(outI, "%d", i); fprintf(outK, "%d", k);
            fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(apple10); return 0;
        }
    }
    else
    {
        system("cls");
        fprintf(outI, "%d", i); fprintf(outK, "%d", k);
        fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(apple10);
        printf("Please press 1 to buy the product.\n"); sleep(2); system("cls"); return 2;
    }
}
int playstation(void)
{
    int i, k, l, choice, price = 1250, check;
    char code[SIZE], line[SIZE];
    FILE *playstation5;
    playstation5 = fopen("playstation5.txt", "r+");
    FILE *inI;
    inI = fopen("playstation_i.txt", "r");
    fscanf(inI, "%d", &i);
    FILE *outI;
    outI = fopen("playstation_i.txt", "w");
    FILE *inK;
    inK = fopen("playstation_k.txt", "r");
    fscanf(inK, "%d", &k);
    FILE *outK;
    outK = fopen("playstation_k.txt", "w");

    printf("\n\n\n\n");
    printf("%20c Serial %10c Value %10c Price(BDT) %10c In-stock\n\n", ' ', ' ', ' ', ' ');
    printf("%22c 1. %13c $10 %15c %d %17c %d\n", ' ', ' ',  ' ', price, ' ', i);

    printf("\n\n\n\nPress 1 to buy $5 PlayStation gift card> "); scanf("%d", &choice);
    if(i == 0)
    {
        fprintf(outI, "%d", i); fprintf(outK, "%d", k);
        fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(playstation5);
        printf("\n\nSorry, we've run out of PlayStation $5 gift cards.\n"); sleep(1);
        printf("Press any key to continue to main menu> \n"); getch(); system("cls");
        return 0;
    }
    if(choice == 1)
    {
        check = payment(price);
        if(check == 1)
        {
            l = 0;
            fgets(line, SIZE, playstation5);
            for(k; k>= 0; ++k)
            {
                code[l] = line[k];
                if(line[k] == ' ')
                {
                    ++k;
                    break;
                }
                ++l;
            }
            fprintf(outK, "%d", k);
            --i;
            fprintf(outI, "%d", i);
            fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(playstation5);
            printf("\n\n\n\n");
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******           Code> %s          *************\n", ' ', code);
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******       PLEASE WRITE DOWN THE CODE SOMEWHERE    *************\n", ' ');
            printf("%20c*******************************************************************\n", ' ');
            printf("%20c*******************************************************************\n", ' ');
            printf("\n\nPress any key to continue."); getch();
            printf("\n\nMake sure to write down the code.\n"); sleep(1);
            printf("Press any key> "); getch(); return 1;
        }
        else if(check == 3)
        {
            fprintf(outI, "%d", i); fprintf(outK, "%d", k);
            fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(playstation5); return 2;
        }
        else if(check == 0)
        {
            fprintf(outI, "%d", i); fprintf(outK, "%d", k);
            fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(playstation5); return 0;
        }
    }
    else
    {
        system("cls");
        fprintf(outI, "%d", i); fprintf(outK, "%d", k);
        fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(playstation5);
        printf("Please press 1 to buy the product.\n"); sleep(2); system("cls"); return 2;
    }
}
int payment(int n)
{
    int option, pay_not, trigger, i;
    printf("Please select your payment method -");
    printf("\n\n1. Bkash");
    printf("\n2. Nagad");
    printf("\n3. Credit Card");
    printf("\nPRESS 0 TO GO TO MAIN MENU");
    printf("\n\n>> "); scanf("%d", &option);
    printf("\n");
    switch(option)
    {
    case 1:
        {
            printf("Please pay %dBDT (vat included)\n", n+14);
            printf("1. Pay\n"); printf("2. Return to payment menu\n"); printf("OR PRESS 0 TO GO TO MAIN MENU\n"); printf(">> "); scanf("%d", &pay_not);
            printf("\n");
            if(pay_not == 1)
            {
                printf("Please wait a moment..."); sleep(2); printf("\nPayment completed successfully.\n"); system("cls"); return 1;
            }
            else if(pay_not == 2)
            {
                system("cls");
                trigger = payment(n);
                if(trigger == 1) return 1;
                else if(trigger == 2)
                {
                    trigger = payment(n);
                    if(trigger == 1) return 1;
                }else if(trigger == 0) return 3;
            }
            else if(pay_not == 0) return 3;
            else
            {
                printf("Please select one of the options shown.\n"); sleep(2); payment(n);
            }
        }
    case 2:
        {
            printf("Please pay %dBDT (vat included)\n", n+10);
            printf("1. Pay\n"); printf("2. Return to payment menu\n"); printf("OR PRESS 0 TO GO TO MAIN MENU\n"); printf(">> "); scanf("%d", &pay_not);
            printf("\n");
            if(pay_not == 1)
            {
                printf("Please wait a moment..."); sleep(2); printf("\nPayment completed successfully.\n"); system("cls"); return 1;
            }
            else if(pay_not == 2)
            {
                system("cls");
                trigger = payment(n);
                if(trigger == 1) return 1;
                else if(trigger == 2)
                {
                    trigger = payment(n);
                    if(trigger == 1) return 1;
                }else if(trigger == 0) return 3;
            }
            else if(pay_not == 0) return 3;
            else
            {
                printf("Please select one of the options shown.\n"); sleep(2); payment(n);
            }
        }
    case 3:
        {
            printf("Please pay %dBDT (vat included)\n", n+25);
            printf("1. Pay\n"); printf("2. Return to payment menu\n"); printf("OR PRESS 0 TO GO TO MAIN MENU\n"); printf(">> "); scanf("%d", &pay_not);
            printf("\n");
            if(pay_not == 1)
            {
                printf("Please wait a moment..."); sleep(2); printf("\nPayment completed successfully.\n"); system("cls"); return 1;
            }
            else if(pay_not == 2)
            {
                system("cls");
                trigger = payment(n);
                if(trigger == 1) return 1;
                else if(trigger == 2)
                {
                    trigger = payment(n);
                    if(trigger == 1) return 1;
                }else if(trigger == 0) return 3;
            }
            else if(pay_not == 0) return 3;
            else
            {
                printf("Please select one of the options shown.\n"); sleep(2); payment(n);
            }
        }
    case 0:
        {
            system("cls"); sleep(1);
            return 0;
        }
    default:
        {
            printf("Please select one of the payment methods. Or PRESS 0 TO GO TO MAIN MENU"); sleep(2);
            system("cls");
            payment(n);
        }
    }
}
