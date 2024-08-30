#include <stdio.h>
int main()
{
    int n, x=1, total;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0)
    {
        x = x * (n % 10);
        n = n / 10;
    }
    printf("Product of digits = %d", x);
    return 0;
}