#include<stdio.h>
#include<ctype.h>
int main()
{
    int num;
    scanf("%d", &num);

    int rev =0, n = num;
    while(n!=0)
    {
        int digit = n%10;
        rev = rev*10 + digit;
        n = n/10;
    }
    if(num==rev)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not a Palindrome Number");
    }

    return 0;
}


