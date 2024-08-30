#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char x[1000];
    char ch;
    fgets(x, sizeof(x), stdin);

    printf("Choice the character: ");
    scanf("%c", &ch);

    int count = 0;
    int i = 0;
    while (x[i] != '\0')
    {
        if (x[i] == toupper(ch) || x[i] == tolower(ch))
        {
            count++;
        }
        i++;
    }
    printf("%d ", count);
    return 0;
}