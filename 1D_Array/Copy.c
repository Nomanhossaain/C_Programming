#include<stdio.h>
int main()
{
    int arr1[100], arr2[100];
    int i, n1, n2;
    scanf("%d", &n1);
    printf("Array 1: ");
    for(i=0; i<n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\n");
    scanf("%d", &n2);
    printf("Array 2: ");
    for(i=0; i<n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for(i= 0; i<n1; i++)
    {
        arr2[i]= arr1[i];
    }
    printf("\n \nArray 1: ");
    for(i=0; i<n2; i++)
    {
        printf("%d", arr2[i]);
    }

    for(i=0; i<n2; i++)
    {
        arr1[i] = arr2[i];
    }
    printf("\nArray 2: ");
    for(i=0; i<n1; i++)
    {
        printf("%d", arr1[i]);
    }
}