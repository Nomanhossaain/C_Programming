#include <stdio.h>
int main()
{
    int row, col;
    // scanf("%d %d", &col, &row);
    int arr[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Row-wise: ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    printf("\nColumn-wise: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[j][i]);
        }
    }
}