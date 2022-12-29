void menu(void)
{
    int choice;

    printf("The gift cards available in our stock -\n");
    printf("\n1. Google Play");
    printf("\n2. Amazon");
    printf("\n3. Apple Gift Card");
    printf("\n4. PlayStation");
    printf("\n\n>> "); scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        {
            googlePlay();
            menu();
            break;
        }
    case 2:
    case 3:
    case 4:
    default:
        {
            printf("Please select the available options.\n"); sleep(2);
            menu();
        }
    }
}
void googlePlay(void)
{
    int i, k, l, choice;
    char code[100], line[100];
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

    printf("%20c Serial %10c Value %10c Price(BDT) %10c In-stock\n", ' ', ' ', ' ', ' ');
    printf("%22c 1. %13c $5 %14c 545 %18c %d\n", ' ', ' ',  ' ', ' ', i);

    printf("\n\nPress 1 to buy $5 gift card> "); scanf("%d", &choice);
    if(choice == 1)
    {
        l = 0;
        FILE *play5;
        play5 = fopen("play5.txt", "r+");
        fgets(line, 85, play5);
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
        fclose(inI); fclose(inK); fclose(outI); fclose(outK);
        printf("Here is your code> %s", code);
        printf("\n\nPress any key to continue."); getch(); system("cls");
    }
}
