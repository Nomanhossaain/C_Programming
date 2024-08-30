#include<stdio.h>
int main()
{
    int i, s=1, n;
    printf("Enter the value: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(s==5)
        {
            s=1;
        }
        printf("%d, ",s);
        s++;
    }
    
    return 0;
}