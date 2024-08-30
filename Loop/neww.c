#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int i, num;
    scanf("%d", &num);

    for(i=1; num>=i; i++)
    {
        printf("%d ", i);
        if(i!=num){
            printf("+ ");
        }
        
    }
}