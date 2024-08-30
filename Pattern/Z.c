#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0||i+j==n-1||i==n-1)
            {
                printf("z");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}