#include <stdio.h>
int main() 
{
    int n,sum=0;

    printf("Enter the size:");
    scanf("%d",&n);

    int arr[n][n];
    
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j || i==0 || i==n-1 || j==n-i-1)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    
    printf("sum is: %d",sum);

    return 0;
}