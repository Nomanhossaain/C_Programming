#include<stdio.h>
int main()
{
    int n;
    char a,b;
    printf("Enter N: ");
    scanf("%d", &n);

    for(a=1; a<=n; a++)
    {
        for(b=1; b<=a; b++){
        printf(" %c", a+64);
        }
        printf("\n");
    }
    
}