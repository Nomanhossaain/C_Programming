#include <stdio.h>
#include <string.h>
int main()
{
    char x[1000];

    fgets(x, sizeof(x), stdin);

    int sum = 0;
    int i = 0;
    while (x[i] != '\0')
    {
        if (x[i] == '0' || x[i] == '1' || x[i] == '2' || x[i] == '3' || x[i] == '4' || x[i] == '5' || x[i] == '6' || x[i] == '7' || x[i] == '8' || x[i] == '9')
        {

            sum += x[i] - 48;
        }
        i++;
    }

    printf("\n%d", sum);

    return 0;
}