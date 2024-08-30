#include<stdio.h>
int main()
{
    int n;

    printf("Enter the array size:");
    scanf("%d",&n);

    int arr[n];
    int arr2[n/3][n/3];
    
    printf("Enter the array elements: \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("\n");
    
    int l=0;
    for(int j=0; j<n/3; j++)
    {
        for(int k=0; k<n/3; k++)
        {
            arr2[j][k]=arr[l];
            printf("%d ",arr2[j][k]);
            l++;
        }
        printf("\n");
    }
    
    return 0;
}