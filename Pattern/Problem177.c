#include<stdio.h>
int main()
{
    int i, j, n;
    scanf("%d", &n);
    for(i=1; i<=n/2+1; i++)
    {
        for(j=1; j<=n/2+1-i; j++)
        {
            printf("_");
        }
        for(j=1; j<=2*i-1; j++)
        {
            if(j==1 || j==2*i-1|| j==n|| j==n/2+1 || i==n/2+1)
            printf("$");
            else
            printf(" ");
        }
        for(j=1; j<=n/2+1-i; j++)
        {
            printf("_");
        }
        printf("\n");
    }
    int x=1;
    for(i=n/2; i>=1; i--)
    {
        for(j=1; j<=x; j++)
        {
            printf("_");
        }
        for(j=1; j<=2*i-1; j++)
        {
            if(j==1 || j==2*i-1|| i==n ||j==n/j || i==n/2+1)
            printf("$");
            else
            printf(" ");
        }
        for(j=1; j<=x; j++)
        {
            printf("_");
        }
        x++;
        printf("\n");
    }
}