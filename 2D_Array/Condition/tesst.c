#include <stdio.h>

int main()
{
    float a,b;
    printf("Enter the value of a :");
    scanf("%f", & a);
    printf("Enter the value of b :");
    scanf("%f", & b);
    double x1 = ( 3.31 *a*a + 2.01 * b*b*b);
    double x2 = ( 7.16 *b*b + 2.01 *a*a*a);
    float x = x1/x2;
    printf(" The value of X = %lf", x);

    return 0;
}