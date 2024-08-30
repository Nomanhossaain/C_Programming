#include <stdio.h>
 
int main()
{
    int x, y;
    int power = 1;
 
    /* Take base and exponent as input*/
    printf("Enter Base:");
    scanf("%d", &x);
    printf("Enter Power:");
    scanf("%d", &y);
    int i = y;
 
    //to calculate the power of negative exponents
    while (i < 0)
    {
        power = power/x;
        i++;
    }
 
    //To calculate the power of positive exponents
    while(i>0)
    {
        power = power * x;
        i--;
    }
    printf("%d^%d = %d", x, y, power);
 
    return 0;
}