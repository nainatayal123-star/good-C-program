#include <stdio.h>
int main ()
{
    int card[16];
    printf("Enter your 16 digit credit card number : ");
    for(int i = 0 ; i < 16 ; i ++)
    {
        scanf("%1d",&card[i]);
    }
    int even[8];
    int sum = 0, sum1 = 0;
    for(int i = 0 ; i < 16 ; i ++)
    {
        if(i % 2 == 0)
        {
            int val = card[i] * 2;
        if(val >= 10)
        {
            val -= 9;
        }
        sum += val;
        }
        else 
        {
            sum1 += card[i];
        }
    }
    int sumf = sum + sum1 ;
    if(sumf %10 == 0)
    {
        printf("Credit card number is valid\n");
    }
    else
    {
        printf("Credit card number is not valid\n");
    }
    return 0;
}