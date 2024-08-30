#include<stdio.h>
int main()
{
    int x, y;
    int add, multi, sub, remain, divi;
    scanf("%d %d", &x, &y);
    add = x + y;
    multi = x * y;
    sub = x - y;
    remain = x % y;
    divi = x / y;

    printf("Addition: %d", add);
    printf("\nMultiplication: %d", multi);
    printf("\nSubtract: %d", sub);
    printf("\nRemainder: %d", remain);
    printf("\nDivision: %d", divi);
    return 0;

}