#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j;
    for(int i = 1; i <= n/2; i++)
    {
        for(j = 1; j <= (n/2)-i+1; j++)
        {
            printf("_");
        }
        for(int j = 1; j <= n/2+i; j++)
        {
            if(j==1 || j == 2*i-1 || j == i)
            {
                printf("$");
            }   
            else
            {
                printf("_");
            }
        }
        printf("\n");
    }
    for(i= n/2+1; i>= 1; i--)
    {
        for(j= (n/2)-i+1; j>= 1; j--)
        {
            printf("_");
        }
        for(j = 1; j <= n/2+i; j++)
        {
            if(j==1 || j == 2*i-1 || j == i || i == n/2+1)
            {
                printf("$");
            }   
            else
            {
                printf("_");
            }
        }
        printf("\n");
    }
    return 0;
}