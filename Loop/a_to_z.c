#include<stdio.h>
int main()
{
    char i, z;
    for (i = 'a'; i <= 'z'; i++)
    {
        printf("%c", i);
        if(i != 'z')
        printf(", ");
    }
    
}