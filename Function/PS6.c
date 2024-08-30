#include <stdio.h>
#include <math.h>

/* Function declarations */
int isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if (isPrime(num))
    {
        printf("%d is Prime number.\n", num);
    }
    else
        printf("%d is not Prime number.\n", num);
    if (isArmstrong(num))
    {
        printf("%d is Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not Armstrong number.\n", num);
    }
    if (isPerfect(num))
    {
        printf("%d is Perfect number.\n", num);
    }
    else
    {
        printf("%d is not Perfect number.\n", num);
    }
}

/**
 * Check whether a number is prime or not.
 * Returns 1 if the number is prime otherwise 0.
 */
int isPrime(int num)
{
    int i;

    for (i = 2; i <= num / 2; i++)
    {
        /*
         * If the number is divisible by any number
         * other than 1 and self then it is not prime
         */
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

/**
 * Check whether a number is Armstrong number or not.
 * Returns 1 if the number is Armstrong number otherwise 0.
 */
int isArmstrong(int num)
{
    int ld, sum, n;
    sum = 0;
    n = num;
    while (n != 0)
    {
        ld = n % 10;         // find the last digit of the number
        sum += ld * ld * ld; // calculate the cube of the last digit and adds to sum
        n = n / 10;
    }
    return (num == sum);
}

/**
 * Check whether the number is perfect number or not.
 * Returns 1 if the number is perfect otherwise 0.
 */
int isPerfect(int num)
{
    int i, sum, n;
    sum = 0;
    n = num;

    for (i = 1; i < n; i++)
    {
        /* If i is a divisor of num */
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return (num == sum);
}