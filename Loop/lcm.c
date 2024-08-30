// C Program to Find GCD and LCM of Two Numbers 
#include <stdio.h>
int main(){
    int num1, num2, gcd, lcm;
    
    // Asking for input
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    // Calculating the gcd
    for (int i = 1; i <= num1 && i <= num2; i++){
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    // Calculating the lcm 
    lcm = (num1 * num2) / gcd;
    
    // Displaying result
    printf("GCD: %d\n",gcd);
    printf("LCM: %d",lcm);
    
    return 0;
}