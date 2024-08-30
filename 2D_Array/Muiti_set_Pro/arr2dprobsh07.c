#include<stdio.h>
int main()
{
    int m=3, det;
    int arr[m][m];
    int arr2[m][m];
    int arr3[m][m];

    printf("Matrix size is: 3 X 3 \n \n");  
    
    printf("Enter the A matrix elements: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the B matrix elements: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\n");

    printf("C = A X B \nC matrix elements are: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            int sum=0;
            for(int k=0; k<m; k++)
            {
                sum += arr[i][k] * arr2[k][j];
            }
            arr3[i][j]= sum;
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}