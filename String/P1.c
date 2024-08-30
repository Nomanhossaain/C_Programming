#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int length = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        length++;
        i++;
    }
    printf("%d", length);
    int x = strlen(str);
    printf("\n%d", x);
}