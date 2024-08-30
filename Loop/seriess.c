#include <stdio.h>
#include <ctype.h>
#include <math.h>
/*
Series:
5

1 2 3 4 5
1 + 2 + 3 + 4 + 5
1 X 2 + 3 X 4 + 5 = 19
5.4 + 4.3 + 3.2 + 2.1
5^2 + 4^2 + 3^2 + 2^2 + 1^2

8
1 X 2 + 3 X 4 + 5 X 6 + 7 X 8 = 100
*/

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0, mul;
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i != n)
        {
            if (i % 2 != 0)
            {
                printf(" X ");
            }
            else
            {
                printf(" + ");
            }
        }

        // Sum Calculation
        if (i % 2 != 0)
        {
            mul = i;
        }
        else
        {
            mul = mul * i;
            sum += mul;
        }
    }

    if (n % 2 == 0)
        printf(" = %d", sum); // Even ----> Sum
    else
        printf(" = %d", sum + mul); // Odd ---> Sum + mul
}