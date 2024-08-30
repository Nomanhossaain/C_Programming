#include <stdio.h>

void number()
{
    int n;
    scanf("%d", &n);
    if (n > 0)
    {
        printf("Positive");
    }
    else if (n < 0)
    {
        printf("Negative");
    }
    else
        printf("Zero");
}

int main()
{

    number();
    return 0;
}