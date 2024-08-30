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
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == arr[j][i])
            {
                x = 1;
            }
            else
                x = 0;
            break;
        }
    }
    printf("\n");
    if (x == 1)
    {
        printf("Yes");
    }
    else
        printf("No");
}