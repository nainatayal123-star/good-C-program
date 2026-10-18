#include <stdio.h>

int main()
{
    int yr;
    printf("Enter the year : ");
    scanf("%d", &yr);
    char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("1. January\n2. February\n3. March\n4. April\n5. May\n6. June\n7. July\n8. August\n9. September\n10. October\n11. November\n12. December\n");
    printf("Enter the month number : ");
    int mon;
    scanf("%d",&mon);
    printf("%24s %d\n\n", month[mon - 1], yr);
    printf("%6s%6s%6s%6s%6s%6s%6s\n", "mon", "tue", "wed", "thu", "fri", "sat", "sun");
    int nyr = yr - 2001 ;
    int lyr = nyr/4;
    nyr -= lyr ;
    int odd;
    odd = (nyr * 1) + (lyr * 2);
    int day[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i = 0 ; i < mon-1  ; i++)
    {
            odd += day[i] % 7;
    }
    odd = odd % 7;
    int day1 = 1 + odd;
    for(int i = 0 ; i < 6 * (day1 - 1) ; i++)
            {
                    printf(" ");
            }
    for(int i = 1 ; i <= day[mon-1] ; i++)
            {
                printf("%6d",i);
                if ((i + (day1 - 1)) % 7 == 0) 
            {
                printf("\n");
            }
            }
    printf("\n");
    return 0;
}