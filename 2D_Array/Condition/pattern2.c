#include<stdio.h>
int main()
{
    int n, a ,b;
    printf("Enter N: ");
    scanf("%d", &n);

    for(a=1; a<=n; a++)
    {
        for(b=1; b<=a; b++){
        printf(" %d", a%2);
        }
        printf("\n");
    }
    
}