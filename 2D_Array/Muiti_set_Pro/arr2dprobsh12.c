#include<stdio.h>
int main()
{
    int m,n,temp;

    printf("Enter the row size:");
    scanf("%d",&m);
    printf("Enter the column size:");
    scanf("%d",&n);

    int arr[m][n];

    printf("Enter the Array elements: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n/2; j++)
        {
            temp=arr[i][j];
            arr[i][j]=arr[i][n-1-j];
            arr[i][n-1-j]=temp;
        }
    }

    printf("\n");

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}