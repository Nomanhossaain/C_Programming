#include <stdio.h>
int main()
{
    int i, j, x = 'A';
    char n;
    scanf("%c", &n);
    for(i =1; i<=(n-'A'+1); i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c ", x);
        }
        x++;
        printf("\n");
    }
}