#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    int arr2[r][c];
    int arr3[r][c];
    printf("\n \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\n \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr3[i][j] = arr[i][j] + arr2[i][j];
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}