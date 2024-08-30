#include<stdio.h>
int main()
{
    int m,n;

    printf("Enter the row size:");
    scanf("%d",&m);
    printf("Enter the column size:");
    scanf("%d",&n);
    
    int arr[m][n];
    
    printf("Enter the matrix elements: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int max = arr[0][0];
    int index_i, index_j;

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(max < arr[i][j])
            {
                max = arr[i][j];
                index_i = i;
                index_j = j;
            }
        }
    }

    printf("Max: %d\n",max);
    printf("Location: [%d][%d]", index_i, index_j);
    
    return 0;
}