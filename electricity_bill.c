
#include<stdio.h>
int main ()
{
    int choice, range , ph , unit ; 
    float price;
    printf ("1. Residential\n2. Commercial\n3. Industrial\n4. Agricultural\n");
    printf ("Enter your choice : ");
    scanf ("%d",&choice);
    switch (choice)
    {
        case 1 :
            printf ("1. 1-phase meter\n2. 3-phase meter\n");
            printf ("Enter your choice : ");
            scanf ("%d",&ph);
            switch (ph)
            {
                case 1 :
                    printf ("1. 0-100 units\n2. 101- 300 units\n");
                    printf ("Enter your choice : ");
                    scanf ("%d",&range);
                    switch (range)
                    {
                        case 1 :
                            printf ("Enter unit consumed : ");
                            scanf ("%d",&unit);
                            price = unit * 3.76 + 50;
                            break;
                        case 2 :
                            printf ("Enter unit consumed : ");
                            scanf ("%d",&unit);
                            price = unit * 7.21 + 200;
                            break;
                    }
                    break;
                case 2 :
                    printf ("1. 301-500 units\n2. >500 units\n");
                    printf ("Enter your choice : ");
                    scanf ("%d",&range);
                    switch (range)
                    {
                        case 1 :
                            printf ("Enter unit consumed : ");
                            scanf ("%d",&unit);
                            price = unit * 9.95;
                            break;
                        case 2 :
                            printf ("Enter unit consumed : ");
                            scanf ("%d",&unit);
                            price = unit * 11.31;
                            break;
                    }
                break;
            }
        case 2 :
            printf ("1. 0-200 units\n2. >200 units\n");
            printf ("Enter your choice : ");
            scanf ("%d",&range);
            switch (range)
            {
                case 1 :
                    printf ("Enter unit consumed : ");
                    scanf ("%d",&unit);
                    price = unit * 6.60 + 220;
                    break;
                case 2 :
                    printf ("Enter unit consumed : ");
                    scanf ("%d",&unit);
                    price = unit * 9.62 + 220;
                    break;
            }
            break;
        case 3 :
            printf ("1. 0-20 KW\n2. >20 KW\n");
            printf ("Enter your choice : ");
            scanf ("%d",&range);
            switch (range)
            {
                case 1 :
                    printf ("Enter unit consumed : ");
                    scanf ("%d",&unit);
                    price = unit * 5.43 + 250;
                    break;
                case 2 :
                    printf ("Enter unit consumed : ");
                    scanf ("%d",&unit);
                    price = unit * 6.88 + 250;
                    break;
            }
            break;
        case 4 :
            printf ("1. 0-5 HP\n2. >5 HP\n");
            printf ("Enter your choice : ");
            scanf ("%d",&range);
            switch (range)
            {
                case 1 :
                    printf ("Enter unit consumed : ");
                    scanf ("%d",&unit);
                    price = unit * 258 + 340;
                    break;
                case 2 :
                    printf ("Enter unit consumed : ");
                    scanf ("%d",&unit);
                    price = unit * 360 + 340;
                    break;
            }
            break;
    }
    printf ("The total price is ₹ %f\n",price);
    return 0;
}