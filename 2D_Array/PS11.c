#include <stdio.h>
int main()
{
    int n;
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
    int sum = 0;
    /*for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % 2 != 0 || j % 2 != 0)
            {
                sum = sum + arr[i][j];
            }
        }
    }*/
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == n / 2 - 1 || i == n / 2 + 1 || j == n / 2 - 1 || j == n / 2 + 1)
            {
                sum = sum + arr[i][j];
            }
        }
    }
    printf("\nSum: %d", sum);
}