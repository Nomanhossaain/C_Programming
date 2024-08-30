#include<stdio.h>
int main()
{
    int m;

    printf("Enter the size:");
    scanf("%d", &m);
    
    int arr[m][m];

    printf("\n");
    
    printf("Identity Matrix: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i==j)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    
    return 0;
}