#include <stdio.h>

int Noman(int x, int y);

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("Max: %d", Noman(x, y));
}

int Noman(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
        return y;
}
