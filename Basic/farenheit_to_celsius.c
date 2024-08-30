#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter the Fahrenheit: \n");
    scanf("%f", &fahrenheit);
    celsius=(fahrenheit - 32) * 5 / 9;
    printf("\nCelsius= %f",celsius);
}