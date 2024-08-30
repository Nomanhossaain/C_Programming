#include<stdio.h>
int main()
{
    int m,n;

    printf("Enter the row size:");
    scanf("%d",&m);
    printf("Enter the column size:");
    scanf("%d",&n);

    int arr[m][n];
    
    printf("Enter the array elements: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("Row-wise: ");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",arr[i][j]);
        }
    }
    
    printf("\nColumn-wise: ");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ",arr[j][i]);
        }
    }
    
    return 0;
}