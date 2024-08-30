#include<stdio.h>
int main()
{
    int m,n;

    printf("Enter the row size:");
    scanf("%d",&m);
    printf("Enter the column size:");
    scanf("%d",&n);

    int arr[m][n];
    int temp[m*n];
    int p=0,k=0;

    printf("Enter the Array elements: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);
            temp[p]=arr[i][j];
            p++;
        }
    }
 
    for(int i=0;i<m*n;i++)
    {
        for(int j=i+1;j<m*n;j++)
        {
            if(temp[i]==temp[j])
            {
                temp[j]=-1;
            }
        }
    }

    printf("\n");
    
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            arr[i][j]=temp[k];
            printf("%d ",arr[i][j]);
            k++;
        }
        printf("\n");
    }
    
    return 0;
}
