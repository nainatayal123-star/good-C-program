rotate
#include<stdio.h>
int main ()
{
    int arr[10];
    int n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(int i = 0 ; i < n ; i++ )
    {
        scanf("%d",&arr[i]);
    }
    int k; 
    printf("Enter k : ");
    scanf("%d",&k);
    if ( k >= n)
    {
        k -= n;
    }
    int temp;
    for(int i = 0 , j = n-1 ; i <= (n-1)/2 ; i++,j-- )
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(int i = 0 , j = n-k-1 ; i <= (n-k-1)/2 ; i++,j-- )
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(int i = n-k , j = n-1 ; i <= (2 * n - k - 1 )/2 ; i++,j-- )
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
