#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    gets(str1);
    gets(str2);
    strcat(str1, str2, 4);
    puts(str1);
    puts(str2);

    strcpy(str1, str2);
    puts(str1);
    puts(str2);
}