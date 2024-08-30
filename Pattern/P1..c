/*
* * * * * 
* * * * * 
* * * * *
*/
#include <stdio.h>
int main()
{
    int r, c, n, n2;
    scanf("%d %d", &n, &n2);
    for(r=1; r<=n; r++)
    {
        for(c=1; c<=n2; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
}