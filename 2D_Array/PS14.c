#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int temp[n * m];
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
            temp[p] = arr[i][j];
            p++;
        }
    }
    for (int i = 0; i < n * m; i++)
    {
        for (int j = i + 1; j < n * m; j++)
        {
            if (temp[i] == temp[j])
            {
                temp[j] = -1;
            }
        }
    }
    printf("\n");
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = temp[k];
            printf("%d ", arr[i][j]);
            k++;
        }
        printf("\n");
    }
}