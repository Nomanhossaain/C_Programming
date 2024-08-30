#include <stdio.h>
int x(int a, int b)
{
    int x = a + b;
    return x;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("\nSum: %d", x(a, b));
}
