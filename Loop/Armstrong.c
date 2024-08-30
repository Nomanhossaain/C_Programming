#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main()
{
    int num, sum = 0;
    scanf("%d", &num);

    int digitCount = 0;
    int n = num;
    while (n != 0)
    {
        int digit = n % 10;
        digitCount++;
        n = n / 10;
    }
    n = num;
    while (n != 0)
    {
        int digit = n % 10;
        sum += pow(digit, digitCount);
        n = n / 10;
    }
    if (sum == num)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong Number");
    }
    return 0;
}
