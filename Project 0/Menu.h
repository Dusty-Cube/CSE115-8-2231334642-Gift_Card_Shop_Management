#define SIZE 150

void menu(void)
{
    int choice, trigger;

    system("cls");
    printf("\n\n\n\n\n\n");
    printf("%40c**********************************\n", ' ');
    printf("%40c*******        MENU        *******\n", ' ');
    printf("%40c**********************************\n", ' ');
    printf("\n\n\n\n\n\n");
    printf("%20c# SELECT THE CARD YOU WANNA PURCHASE> \n\n\n", ' ');
    printf("\n%20c  1. Google Play", ' ');
    printf("\n%20c  2. Amazon", ' ');
    printf("\n%20c  3. Apple Gift Card", ' ');
    printf("\n%20c  4. PlayStation", ' ');
    printf("\n%20c  PRESS 0 TO EXIT", ' ');
    printf("\n\n%20c  >> ", ' '); scanf("%d", &choice);

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
            printf("%20c# ", ' '); system("pause");
            system("cls");
            printf("\n\n\n\n\n\n");
            printf("%20c**********************************\n", ' ');
            printf("%20c**        HAVE A GOOD DAY       **\n", ' ');
            printf("%20c**********************************\n", ' ');
            printf("\n\n\n\n\n\n");
            break;
        }
    default:
        {
            printf("%20c# PLEASE SELECT THE AVAILABLE OPTIONS\n", ' '); sleep(2); system("cls");
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

    printf("\n\n\n\n%20c# PRESS 1 TO BUY $5 GOOGLE PLAY GIFT CARD> ", ' '); scanf("%d", &choice);
    if(i == 0)
    {
        fprintf(outI, "%d", i); fprintf(outK, "%d", k);
        fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(googleplay5);
        printf("\n\n%20c# SORRY, WE'VE RUN OUT OF GOOGLE PLAY $5 GIFT CARDS\n", ' '); sleep(1);
        printf("%20c# PRESS ANY KEY TO CONTINUE TO MAIN MENU> \n", ' '); getch(); system("cls");
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
            printf("\n\n%20c# PRESS ANY KEY TO CONTINUE", ' '); getch();
            printf("\n\n%20c# Make sure to write down the code.\n", ' '); sleep(1);
            printf("%20c# PRESS ANY KEY> ", ' '); getch(); return 1;
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
        printf("%20c# PLEASE PRESS 1 TO BUY THE PRODUCT.\n", ' '); sleep(2); system("cls"); return 2;
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

    printf("\n\n\n\n%20c# PRESS 1 TO BUY $5 AMAZON GIFT CARD> ", ' '); scanf("%d", &choice);
    if(i == 0)
    {
        fprintf(outI, "%d", i); fprintf(outK, "%d", k);
        fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(amazon5);
        printf("\n\n%20c# SORRY, WE'VE RUN OUT OF AMAZON $5 GIFT CARDS\n", ' '); sleep(1);
        printf("%20c# PRESS ANY KEY TO CONTINUE TO MAIN MENU> \n", ' '); getch(); system("cls");
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
            printf("\n\n%20c# PRESS ANY KEY TO CONTINUE", ' '); getch();
            printf("\n\n%20c# MAKE SURE TO WRITE DOWN THE CODE\n", ' '); sleep(1);
            printf("%20c# Press any key> ", ' '); getch(); return 1;
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
        printf("%20c# PLEASE PRESS 1 TO BUY THE PRODUCT\n", ' '); sleep(2); system("cls"); return 2;
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

    printf("\n\n\n\n%20c# PRESS 1 TO BUY $10 APPLE GIFT CARD> ", ' '); scanf("%d", &choice);
    if(i == 0)
    {
        fprintf(outI, "%d", i); fprintf(outK, "%d", k);
        fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(apple10);
        printf("\n\n%20c# SORRY, WE'VE RUN OUT OF APPLE $10 GIFT CARDS\n", ' '); sleep(1);
        printf("%20c# PRESS ANY KEY TO CONTINUE TO MAIN MENU> \n", ' '); getch(); system("cls");
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
            printf("\n\n%20c# PRESS ANY KEY TO CONTINUE", ' '); getch();
            printf("\n\n%20c# MAKE SURE TO WRITE DOWN THE CODE\n", ' '); sleep(1);
            printf("%20c# PRESS ANY KEY> ", ' '); getch(); return 1;
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
        printf("%20c# PLEASE PRESS 1 TO BUY THE PRODUCT\n", ' '); sleep(2); system("cls"); return 2;
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

    printf("\n\n\n\n%20c# PRESS 1 TO BUY $5 PLAYSTATION GIFT CARD> ", ' '); scanf("%d", &choice);
    if(i == 0)
    {
        fprintf(outI, "%d", i); fprintf(outK, "%d", k);
        fclose(inI); fclose(inK); fclose(outI); fclose(outK); fclose(playstation5);
        printf("\n\n%20c# SORRY, WE'VE RUN OUT OF PLAYSTATION $10 GIFT CARDS\n", ' '); sleep(1);
        printf("%20c# PRESS ANY KEY TO CONTINUE TO MAIN MENU> \n", ' '); getch(); system("cls");
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
            printf("\n\n%20c# PRESS ANY KEY TO CONTINUE", ' '); getch();
            printf("\n\n%20c# MAKE SURE TO WRITE DOWN THE CODE\n", ' '); sleep(1);
            printf("%20c# PRESS ANY KEY> ", ' '); getch(); return 1;
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
        printf("%20c# PLEASE PRESS 1 TO BUY THE PRODUCT\n", ' '); sleep(2); system("cls"); return 2;
    }
}
int payment(int n)
{
    int option, pay_not, trigger, i;
    printf("\n\n\n\n\n\n");
    printf("%40c**********************************\n", ' ');
    printf("%40c**        PAYMENT METHODS       **\n", ' ');
    printf("%40c**********************************\n", ' ');
    printf("\n\n\n\n\n\n");
    printf("%20c# PLEASE SELECT YOUR PAYMENT METHOD> ", ' ');
    printf("\n\n%20c  1. Bkash", ' ');
    printf("\n%20c  2. Nagad", ' ');
    printf("\n%20c  3. Credit Card", ' ');
    printf("\n%20c# PRESS 0 TO GO TO MAIN MENU", ' ');
    printf("\n\n%20c  >> ", ' '); scanf("%d", &option);
    printf("\n");
    switch(option)
    {
    case 1:
        {
            printf("%20c# PLEASE PAY %dBDT (VAT INCLUDED)\n", ' ', n+14);
            printf("%20c  1. Pay\n", ' '); printf("%20c  2. Return to payment menu\n", ' '); printf("%20c# OR PRESS 0 TO GO TO MAIN MENU\n", ' '); printf("%20c  >> ", ' '); scanf("%d", &pay_not);
            printf("\n");
            if(pay_not == 1)
            {
                printf("%20c# Please wait a moment...", ' '); sleep(2); printf(" Payment completed successfully :)\n"); sleep(2); system("cls"); return 1;
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
                printf("%20c# PLEASE SELECT ONE OF THE OPTIONS SHOWN\n", ' '); sleep(2); payment(n);
            }
        }
    case 2:
        {
            printf("%20c# PLEASE PAY %dBDT (VAT INCLUDED)\n", ' ', n+10);
            printf("%20c  1. Pay\n", ' '); printf("%20c  2. Return to payment menu\n", ' '); printf("%20c# OR PRESS 0 TO GO TO MAIN MENU\n", ' '); printf("%20c  >> ", ' '); scanf("%d", &pay_not);
            printf("\n");
            if(pay_not == 1)
            {
                printf("%20c# Please wait a moment...", ' '); sleep(2); printf(" Payment completed successfully :)\n"); sleep(2); system("cls"); return 1;
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
                printf("%20c# PLEASE SELECT ONE OF THE OPTIONS SHOWN\n", ' '); sleep(2); payment(n);
            }
        }
    case 3:
        {
            printf("%20c# PLEASE PAY %dBDT (VAT INCLUDED)\n", ' ', n+25);
            printf("%20c  1. Pay\n", ' '); printf("%20c  2. Return to payment menu\n", ' '); printf("%20c# OR PRESS 0 TO GO TO MAIN MENU\n", ' '); printf("%20c  >> ", ' '); scanf("%d", &pay_not);
            printf("\n");
            if(pay_not == 1)
            {
                printf("%20c# Please wait a moment...", ' '); sleep(2); printf("Payment completed successfully :)\n"); sleep(2); system("cls"); return 1;
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
                printf("%20c# PLEASE SELECT ONE OF THE OPTIONS SHOWN\n", ' '); sleep(2); payment(n);
            }
        }
    case 0:
        {
            system("cls"); sleep(1);
            return 3;
        }
    default:
        {
            printf("%20c# PLEASE SELECT ONE OF THE PAYMENT METHODS OR PRESS 0 TO GO TO MAIN MENU", ' '); sleep(2);
            system("cls");
            payment(n);
        }
    }
}
