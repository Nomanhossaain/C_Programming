/*
*
* *
* * *
* * * *
* * * * *
*/
#include<stdio.h>
int main()
{
    int i, j, stars;
    scanf("%d", &stars);
    for(i=1; i<=stars; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
