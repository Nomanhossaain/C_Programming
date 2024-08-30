#include <stdio.h>
int main()
{
    int r, c;
    printf("You need to two 3 x 3 sized matrix: ");
    scanf("%d %d", &r, &c);
    int arr1[r][c];
    int arr2[r][c];
    int arr3[r][c];
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int sum = 0;
            for (int k = 0; k < r; k++)
            {
                sum = sum + arr1[i][k] * arr2[k][j];
            }
            printf("%d ", sum);
        }
        printf("\n");
    }
}