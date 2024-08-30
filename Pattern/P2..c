/*
* * * * *
*       *
* * * * *
*/
#include <stdio.h>
int main()
{
    int i, j,col, row;
    scanf("%d %d", &col, &row);
    for(i=1; i<=col; i++)
    {
        for(j=1; j<=row; j++)
        {
            if(i==1 || i==col ||j==1 || j==row)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
}