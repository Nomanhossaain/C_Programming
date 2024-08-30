#include<stdio.h>
int main ()
{
    int i, j, k, n, x=0, y=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf("  ");
            x++;
        }
        for (k =0; k != 2 * i - 1; k++) 
        {
            if (x <= n - 1) 
            {
                printf("%d ", i + k);
                x++;
            }
            else 
            {
                y++;
                printf("%d ", (i + k - 2 * y));
            }
        }
        y = x = k = 0;
        printf("\n");
    }
}