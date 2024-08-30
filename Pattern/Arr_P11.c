#include<stdio.h>
int main() 
{
    int n, i, j;
    scanf("%d", &n);
    int array[n];  
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);

        if(array[i] % 3== 0)
        {
            array[i] = -1;
        }
    }
    printf("\n");
    for(j=0; j<n; j++)
    {
        printf("%d ",array[j]);
    }
}