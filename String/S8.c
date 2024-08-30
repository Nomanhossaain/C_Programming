#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char x[1000];
    char y[1000];
    char ch;

    fgets(x, sizeof(x), stdin);

    int p = 0;

    for (int i = 0; i <= 127; i++)
    {
        int j;
        for (j = 0; x[j] != '\0'; j++)
        {
            if (i == x[j])
            {
                y[p] = x[j];
                p++;
            }
        }
        y[j] = '\0';
    }
    puts(y);
    return 0;
}