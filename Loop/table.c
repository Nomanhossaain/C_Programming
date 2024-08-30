#include<stdio.h>
int main()
{
    int i, x, multi;
    scanf("%d", &x);

    for(i = 1; i <= 10; i++)
    {
        multi = x*i;
        printf("%d x %d= %d\n", x, i, multi);
    }
}