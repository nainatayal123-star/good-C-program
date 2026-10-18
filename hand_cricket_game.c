#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comp_run()
{
    int choice = rand() % 6;
    return choice + 1 ;
}

int main()
{
    srand(time(NULL));
    int out = 0,choice,cchoice,run = 0,crun = 0,i=1;
    printf("=====================================================");
    printf("\n\t\t  Hand Cricket\n");
    printf("=====================================================\n");
    char name[15];
    printf("Enter your first name : ");
    scanf("%s",name);
    printf("\n");
    printf("-----------------------------------------------------\n");
    printf("\t  1st INNINGS: %s 's Batting\n",name);
    printf("-----------------------------------------------------\n");

    do{
        invalid:
        printf("\nBall %d :\n",i);
        printf("Enter runs (1 - 6) : ");
        scanf("%d",&choice);
        if(choice > 6 || choice < 1)
        {
            printf("Invalid Input\n\n");
            goto invalid;
        }
        printf("Computer played : ");
        cchoice = comp_run();
        printf("%d\n",cchoice);
        if(cchoice == choice)
        {
            out = 1;
            printf(">> OUT! Both chose %d.\nInnings Over!\n",choice);
        }
        else
        {
            printf(">> Shot! %d runs added.\n",choice);
            run += choice;
            printf("Score: %d/0\n",run);
        }
        i++;
    } while (out == 0);
    printf("=====================================================\n");
    printf("%s scored %d runs.\n",name,run);
    printf("TARGET FOR COMPUTER: %d runs from remaining innings.\n",run + 1);
    printf("=====================================================\n");
    printf("\n");
    printf("-----------------------------------------------------\n");
    printf("\t  2nd INNINGS: Computer's Batting\n");
    printf("-----------------------------------------------------\n");
    out = 0,i = 1;
    do{
        invalid1:
        printf("\nBall %d :\n",i);
        printf("Enter your ball (1 - 6) : ");
        scanf("%d",&choice);
        if(choice > 6 || choice < 1)
        {
            printf("Invalid Input\n\n");
            goto invalid1;
        }
        printf("Computer played : ");
        cchoice = comp_run();
        printf("%d\n",cchoice);
        if(cchoice == choice)
        {
            out = 1;
            printf(">> OUT! Both chose %d.\nInnings Over!\n",cchoice);
        }
        else
        {
            printf(">> Computer scores %d runs.\n",cchoice);
            crun += cchoice;
            if(run >= crun )
            {
                printf("Need: %d runs to win.\n",run - crun + 1);
            }
        }
        i++;
    } while (out == 0 && run >= crun);
    printf("=====================================================\n");
    printf("\n\t\t  Match Result\n");
    printf("=====================================================\n");
    if (run > crun)
    {
        printf("%s: %d runs\nComputer: %d runs\n",name,run,crun);
        printf(">> CONGRATULATIONS! %s won by %d runs!\n",name,run - crun);
    }
    else if (run == crun)
    {
        printf(">> It's a TIE!\nScores are level at %d runs each!\n", run);
    }
    else
    {
         printf("%s: %d runs\n",name,run);
        printf("Computer: %d runs\n",crun);
        printf("Computer chased down the target!\n>> Computer won by 1 wicket!\n");
    }
    printf("=====================================================\n");
    return 0;
}