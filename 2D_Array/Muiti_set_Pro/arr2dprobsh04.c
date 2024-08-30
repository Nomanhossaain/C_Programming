#include<stdio.h>
int main()
{
    int m;

    printf("Enter the size:");
    scanf("%d", &m);
    
    int arr[m][m];
    
    printf("Enter the array elements: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("Major diagonal: ");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i==j)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }
    
    return 0;
}