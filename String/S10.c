#include <stdio.h>
#include <string.h>
int main()
{
    char x[1000];
    fgets(x, sizeof(x), stdin);

    int temp = strlen(x);
    int flag = 0;
    int i = 0;
    while (i < temp / 2)
    {
        if (x[i] == x[temp - 2 - i])
        {
            flag = 0;
        }
        else
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}