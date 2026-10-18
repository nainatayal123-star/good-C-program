
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int comp_choice()
{
    srand(time(NULL));
    int choice = rand() % 3;
    printf("Computer choose : ");
    if(choice == 0)
    {
        printf("Rock\n");
    }
    if(choice == 1)
    {
        printf("Paper\n");
    }
    if(choice == 2)
    {
        printf("Scissors\n");
    }
    printf("\n");
    return choice;
}

int main ()
{
    int pointU = 0,pointC = 0;
    printf("\n\t\tROCK PAPER & SCISSORS\n\n");
    char name[15];
    printf("Enter your first name : ");
    scanf("%s",name);
    printf("\n");
    for(int i = 1 ; i < 4 ; i ++)
    {
        printf("\t\t\tROUND %d\n\n",i);
        printf("%s's turn :\n\n",name);
        printf("1. Rock\n2. Paper\n3. Scissors\n\n");
        printf("Enter your choice : ");
        int choice;
        scanf("%d",&choice);
        choice--;
        printf("\nComputer's turn :\n\n");
        int c_choice;
        c_choice = comp_choice();
        if(choice == c_choice)
        {
            printf("\t\tTie\n");
            pointU++;
            pointC++;
        }
        else if(choice > c_choice )
        {
            if (choice == 2 && c_choice == 0 )
            {
                printf("\t\tComputer Wins\n");
                pointC++;
            }
            else
            {
                printf("\t\t%s Wins\n",name);
                pointU++;
            }
        }
        else if (choice == 0 && c_choice == 2)
        {
            printf("\t\t%s Wins\n",name);
            pointU++;
        }
        else
        {
            printf("\t\tComputer Wins\n");
            pointC++;
        }
        printf("\n");
    }
    printf("\t\tResult\n\n");
    if(pointC > pointU)
    {
        printf("\t\tComputer Wins\n\n");
    }
    else if (pointC == pointU)
    {
        printf("\t\tTie\n\n");
    }
    else
    {
        printf("\t\t%s Wins\n\n",name);
    }
    return 0;
}