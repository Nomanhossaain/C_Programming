#include <stdio.h>
int main()
{
    int m = 3, det;
    int arr[m][m];

    printf("Matrix size is: 3 X 3 \n \n");

    printf("Enter the array elements: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Position [%d][%d] element is: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n");

    printf("Matrix is: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
            det = (arr[0][0] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1])) - (arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0])) + (arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]));
        }
        printf("\n");
    }

    printf("Determinant is: %d", det);

    return 0;
}