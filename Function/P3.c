#include <stdio.h>

void Noman()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("Max: %d", a);
    }
    else
        printf("Max: %d", b);
}
int main()
{
    Noman();

    return 0;
}