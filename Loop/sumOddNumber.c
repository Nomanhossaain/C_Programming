#include <stdio.h>
int main()
{
    int i, num, sum=0;
    scanf("%d", &num);
    for(i=1; i<=num; i+=2)
    {
        sum += i;
    }
    printf("Sum of all odd number: %d", sum);
    return 0;
}