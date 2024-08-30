#include <stdio.h>
int main()
{
    int m, n;

    printf("Enter the row size:");
    scanf("%d", &m);
    printf("Enter the column size:");
    scanf("%d", &n);

    int arr[m][n];
    int arr2[m][n];
    int arr3[m][n];

    printf("Enter the A matrix elements: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the B matrix elements: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("\n");

    printf("C = A + B \nC matrix elements are: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr3[i][j] = arr[i][j] + arr2[i][j];
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}