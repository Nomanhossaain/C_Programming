#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Input the values for number1 and number2: ");
    scanf("%d %d", &num1, &num2);
    if (num1 == num2)
    {
        printf("Number1 and Number2 are equal.\n");
    }
    else
    {
        printf("Number1 and Number2 are not equal.\n");
    }
}