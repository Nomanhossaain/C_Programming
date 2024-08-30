/*
*   *
 * * 
  *  
 * * 
*   *
*/
#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int i, j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i==j || j==n-i+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

/*
  *  
  *  
*****
  *  
  *  
*/
/*#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int i, j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j==n/2+1 || i== n/2+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}*/