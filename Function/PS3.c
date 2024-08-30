#include <stdio.h>

void number()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("%d is even number", n);
    }
    else
    {
        printf("%d is odd number", n);
    }
}
int main()
{
    number();
    return 0;
}
