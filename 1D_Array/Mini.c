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
    int mini = arr[0];
    for(i=0; i<n; i++)
    {
        if(mini > arr[i])
        {
            mini = arr[i];
        }
    }
    printf("\nMinimum: %d", mini);
}