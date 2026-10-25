#include<stdio.h>

int main ()
{
    int choice;
    printf("living creature :\n1. Human\n2. animal\n3. bird\n4. water animl\n5. insects\n");
    printf ("\nThink about any living creature............\n");
    do{
    printf("\nType 1 when thought : ");
    scanf("%d",&choice);
    }while(choice != 1);
    printf("\nType 1 for yes & 0 for no.\n");
    printf("\n\nDoes it have 4 legs ? ");
    scanf("%d",&choice);
    printf("\n");
    if (choice == 1)
    {
        printf("Can it fly ? ");
        scanf("%d",&choice);
        printf("\n");
        if(choice == 1)
        {
            printf("You thought of an insect");
        }
        else
        {
            printf("You thought of an animal");
        }

    }
    else
    {
         printf("Can it fly ? ");
         printf("\n");
        scanf("%d",&choice);
        if(choice == 1)
        {
            printf("You thought of a bird");
        }
        else
        {
            printf("Can it breath under water for more than 5 mins ? ");
            scanf("%d",&choice);
            printf("\n");
            if(choice == 1)
            {
                printf("You thought of a water animal");
            }
            else
            {
                printf("You thought of a human");
            }
        }

    }
    printf("\n");
    return 0;
}