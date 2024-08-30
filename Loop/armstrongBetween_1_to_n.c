#include <stdio.h>
#include <math.h>
int main()
{
    int lower, higher, i, temp1, temp2, remainder;
    int n = 0, result = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &lower, &higher);

    printf("Armstrong numbers: ");
    for(i = lower + 1; i < higher; ++i)
    {
        temp2 = i;
        temp1 = i;
        while (temp1 != 0)
        {
            temp1 /= 10;
            ++n;
        }
        while (temp2 != 0)
        {
            remainder = temp2 % 10;
            result += pow(remainder, n);
            temp2 /= 10;
        }
        if (result == i) 
        {
            printf("%d ", i);
        }
        n = 0;
        result = 0;
    }
    return 0;
}