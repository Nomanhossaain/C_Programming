#include<stdio.h>
int main()
{
    int i, n;
    int arr[100];
    scanf("%d", &n);
    printf("\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for(i=0; i<n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("\nMaximum: %d", max);
}