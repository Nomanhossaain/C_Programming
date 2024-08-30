#include<stdio.h>
int main()
{
    int n, x;
    scanf("%d",&n);
    int i, j;
    for(int i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        for(j=1; j<=2*n-2*i-1; j++)
        {
            printf("_");
        }
        if(i==n)
        {
            x=i-1;
        }
        else
        {
            x=i;
        }
        for(j=x; j>=1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}