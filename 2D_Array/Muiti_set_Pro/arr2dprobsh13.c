#include <stdio.h>
int main() 
{
    int n,sum=0;

    printf("Enter the size:");
    scanf("%d",&n);

    int arr[n][n];

    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    int flag=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i][j]==arr[j][i])
            {
                flag=1;
            }
            
            else
            {
                flag=0;
                break;
            }
        }
    }

    printf("\n");

    if(flag==1)
    {
        printf("Yes");
    }
            
    else
    {
       printf("No");
    }

    return 0;
}