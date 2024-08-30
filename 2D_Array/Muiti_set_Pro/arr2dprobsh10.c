#include <stdio.h>
int main()
{
    int n, sum = 0;

    printf("Enter the size:");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter the array elements: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nBoxed position: \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > n / 2 && j == 0)
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

    printf("\nBoxed positionum sum is: %d", sum);

    return 0;
}