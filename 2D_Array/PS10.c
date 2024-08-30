#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == n / 2 || i == n / 2 || (i < n / 2 && j == n - 1) || (j > n / 2 && i == n - 1) || (i > n / 2 && j == 0) || (j <= n / 2 - 1 && i == 0))

            {

                printf("%d ", arr[i][j]);
                sum += arr[i][j];
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    printf("\n%d", sum);

    return 0;
}
