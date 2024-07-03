#include<stdio.h>
int main()
{
    int i, n, sum=0;
    int arr[100];
    scanf("%d", &n);
    printf("\n\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum : %d", sum);
    printf("\nAverage : %2.f", (float)sum/n);

}