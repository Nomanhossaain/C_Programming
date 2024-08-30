#include<stdio.h>
int main()
{
    int i, num;
    scanf("%d", &num);
    for(i=0; num>0; num= num/10)
    {
        i=i+(num%10);
    }
    printf("Sum of total digits: %d", i);
}