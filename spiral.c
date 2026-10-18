#include<stdio.h>
int main ()
{
    int arr[5][5],n,m,count = 1,count1 = 1,count2 = 1;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    printf ("Enter the number of column : ");
    scanf("%d",&m);
    n = n-1 ; m = m-1 ;
    for (int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= m;j++)
        {
            printf("Enter the (%d , %d) element : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int n1 = n,m1 = m;
    int i1 = 0,j1 = m;
    int i2 = n,j2 = 0;
    int i3 = 1 , j3 = m;
    int j4 = 0;
    while(n1 >= 0 && m1 >= 0)
    {
        if(count % 2 != 0)
        {
            if(count1 % 2 != 0)
            {
                for (int j = j4; j <= j1; j++ )
                {
                    printf("%d\t",arr[i1][j]);
                }
                i1++;
            }
            else
            {
                for(int j = j1; j >= j4 ;j-- )
                {
                    printf("%d\t",arr[i2][j]);
                }
                i2--;
            }
            count1++;
            n1--;
        }
        else
        {
            if(count2 % 2 != 0)
            {
                for(int i = i1; i <= i2 ;i++)
                {
                    printf("%d\t",arr[i][j1]);
                }
                j1--;
            }
            else
            {
               for(int i = i2 ; i >= i1 ; i--) 
               {
                    printf("%d\t",arr[i][j4]);
               }
               j4++;
            }
            count2++;
            m1--;
        }
        count++;
    }
}