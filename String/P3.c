#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int length = strlen(str);
    printf("%d", length);
    printf("\n\n");
    char x;
    scanf("%c", &x);
    int i = 0, position = -1;
    while (str[i] != '\0')
    {
        if (toupper(str[i]) == toupper(x))
        {
            // printf("%d\n", i);
            position = i;
            break;
        }
        i++;
    }
    // printf("%d", position);
    if (position == -1)
    {
        printf("Invalid");
    }
    else
    {
        printf("%d", position);
    }
}