#include<stdio.h>
#include<math.h>
int main()
{
     float amount, rate, intrest, time, ci, i;
     printf("Amount: ");
     scanf("%f", &amount);
     printf("Interest rate: ");
     scanf("%f", &rate);
     printf("Period in years: ");
     scanf("%f", &time);
     intrest = 1+(rate/100);

     ci = 1;
     for(i = 1; i <= time; i++)
        ci = ci * intrest;
     ci = amount * ci - amount;
     printf("Your compound interest is: %.2f", ci);
     return 0;
}