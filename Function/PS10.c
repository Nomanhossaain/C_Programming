#include <stdio.h>
#include <string.h>
int string_length(char[]);
int main()
{
    char s[100];
    gets(s);
    int len = string_length(s);
    printf("%d", len);
}
int string_length(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}