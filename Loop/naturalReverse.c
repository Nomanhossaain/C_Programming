#include<stdio.h>
int main()
{
    int i, x;
    scanf("%d", &x);  
    for(i=x; i>=1; i--)
    {
        printf("%d", i);
        if(i!=1)
        {
            printf(", ");
        }
    }   
}