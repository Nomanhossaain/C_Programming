#include<stdio.h>
int main()
{
    int i, n, arr[100];
    int temp;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);     
    }
    printf("Array A : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    for(i=0; i<n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    printf("\nArray B : ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}