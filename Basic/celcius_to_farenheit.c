#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("\nEnter the Celsius: ");
    scanf("%f", &celsius);
    fahrenheit=(1.8 * celsius)+32;
    printf("\nFahrenheit: %f", fahrenheit)
    return 0;
}