#include <stdio.h>
int main() 
{
    int m,n,sum=0;

    printf("Enter the row size:");
    scanf("%d",&m);
    printf("Enter the column size:");
    scanf("%d",&n);

    int arr[m][n];
    
    printf("Enter the array elements: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];
        }
    }
    
    printf("sum is: %d",sum);

    return 0;
}