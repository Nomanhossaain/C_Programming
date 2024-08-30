#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n \n");
    int det;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
            det = (arr[0][0] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1])) - (arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0])) + (arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]));
        }
        printf("\n");
    }
    printf("Determinant: %d", det);
}