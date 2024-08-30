#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int l = 0;
    int arr2[n / 3][n / 3];
    for (i = 0; i < n / 3; i++)
    {
        for (int j = 0; j < n / 3; j++)
        {
            arr2[i][j] = arr[l];
            printf("%d ", arr2[i][j]);
            l++;
        }
        printf("\n");
        for (int i = 0; i < n; i++)
        {
                }
    }
}