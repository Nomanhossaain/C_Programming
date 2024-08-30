/*
 *********
  *     *
   *   *
    * *
     *
*/
#include<stdio.h>
int main()
{
    int i, j, k,n1=1, n;
    scanf("%d", &n);
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=n1; j++)
        {
            printf(" ");
        }
        for(k=1; k<=i*2-1; k++)
        {
            if(k==1 || k==2*i-1 || i==n)  
            printf("*");  
            else  
            printf(" ");
        }
        printf("\n");
        n1++;
    }
}