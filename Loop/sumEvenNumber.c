#include <stdio.h>
int main()
{
    int i, num, sum=0;
    scanf("%d", &num);
    for(i=2; i<=num; i+=2)
    {
        sum += i;
    }
    printf("Sum of all even number: %d", sum);
    return 0;
}