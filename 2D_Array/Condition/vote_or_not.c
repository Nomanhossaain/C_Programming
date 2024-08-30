#include <stdio.h>
int main()
{
    int a;
    printf("Input the age of the candidate : ");
    scanf("%d", &a);
    if (a >= 18)
    {
        printf("Congratulation! You are eligible for casting your vote.\n");
        
    }
    else
    {
        printf("Sorry, You are not eligible to caste your vote.\n");
        printf("You would be able to caste your vote after %d year.\n", 18-a); 
    }
    return 0;
}