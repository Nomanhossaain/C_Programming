#include <stdio.h>
int armstrong(int num);

int main()
{
    int num;
    scanf("%d", &num);
    if (armstrong(num))
    {
        printf("%d is an Armstrong Number", num);
    }
    else
        printf("%d is not an Armstrong Number", num);
}
int armstrong(int num)
{
    int sum = 0, temp;
    int n = num;
    while (n != 0)
    {
        temp = n % 10;
        sum += temp * temp * temp;
        n = n / 10;
    }
    return (num == sum);
}