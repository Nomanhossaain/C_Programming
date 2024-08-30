#include <stdio.h>

void reverse()
{
    int n;
    scanf("%d", &n);
    int dl, sum = 0;
    int num = n;
    while (num > 0)
    {
        dl = num % 10;
        sum = sum * 10 + dl;
        num = num / 10;
    }
    printf("%d", sum);
}
int main()
{
    reverse();
    return 0;
}
