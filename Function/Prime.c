#include <stdio.h>
int prime(int num);
int main()
{
    int num;
    scanf("%d", &num);
    if (prime(num))
    {
        printf("%d is prime number", num);
    }
    else
        printf("%d is not prime number", num);
}

int prime(int num)
{
    int i;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}