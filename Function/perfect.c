#include <stdio.h>
// int perfect(int num);

int perfect(num)
{
    int i, sum = 0;
    int n = num;
    for (i = 0; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return (num == sum);
}
int main()
{
    int num;
    scanf("%d", &num);
    if (perfect(num))
    {
        printf("%d is a perfecr number", num);
    }
    else
        printf("%d is not a perfecr number", num);
}