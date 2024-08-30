/*
10 8 6 4 2 
8 6 4 2 
6 4 2 
4 2 
2 
*/
#include <stdio.h>

int main()
{
    int i, j, n, k=1;
    scanf("%d", &n);
    for(i=n; i>=1; i--)
    {
        for(j=i*2; j>=2; j=j-2)
        {
            printf("%d ", j);
        }        
        printf("\n");
    }

    return 0;
}