#include<stdio.h>
int main()
{
    int arr[]={10, 20, 30, 25, 20, 35, 50, 60, 70};
    int i, position= -1;
    int n;
    scanf("%d", &n);
    for(i =0; i<n; i++)
    {
        if(n == arr[i])
        {
            position= i + 1;
            break;
        }
    }
    if(position == -1)
    {
        printf("\nNumber not found");
    }
    else
    printf("\nThe number of %d position is: %d", n, position);
}