#include <stdio.h>
int main()
{   int a, b, p, c, m, t, mp;
    printf("\nEligibility Criteria for an Engineering:\n");
    printf("Marks in Mathematics >= 65\n");
    printf("Marks in Physics >= 55\n");
    printf("Marks in Chemestry >= 50\n");
    printf("Total in all three subject >= 180");
    printf(" or Total in Maths and Physics >= 140\n");
    printf("----------------------------------------------------------------------\n");
    printf("\nInput the marks obtained in Physics:");
    scanf("%d", &p);
    printf("Input the marks obtained in Chemistry:");
    scanf("%d", &c);
    printf("Input the marks obtained in Mathematics:");
    scanf("%d", &m);
    a=m + p + c;
    b=m + p;
    printf("\nTotal marks of Mathematics, Physics and Chemistry : %d\n",a);
    printf("Total marks of Maths and  Physics : %d\n", b);
    if(m>=65 && p>=55 && c>=50)
        if((a) >= 180 || (b) >= 140)
            printf("\nThe candidate is eligible for admission.\n");
        else
            printf("The candidate is not eligible.\n");
    else
        printf("\nThe candidate is not eligible.\n");
        
            
}