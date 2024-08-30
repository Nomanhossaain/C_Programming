#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    int max = arr[0][0];
    int index_i;
    int index_j;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                index_i = i;
                index_j = j;
            }
        }
    }
    printf("Max: %d", max);
    printf("\nLocation: [%d][%d]", index_i, index_j);
}
