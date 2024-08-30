#include<stdio.h>
int main()
{
    int num, x, y, sum;
    scanf("%d", &num);
    x = num % 10;
    while(num >= 10)
    {
        num= num / 10;
    }
    y = num;
    sum = x + y;
    printf("First: %d,\n", x);
    printf("Last: %d,\n", y);
    printf("Sum of first and last: %d", sum);

}