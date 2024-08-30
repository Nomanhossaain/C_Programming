#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int length = strlen(str);
    printf("%d", length);

    int x;
    scanf("\n%d", &x);
    if (x < length)
    {
        printf("%c", str[x]);
    }
    else
        printf("Invalid");
}