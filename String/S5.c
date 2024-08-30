#include <stdio.h>
#include <string.h>
int main()
{
    char sen1[1000];
    char sen2[1000];

    fgets(sen1, sizeof(sen1), stdin);
    sen1[strcspn(sen1, "\n")] = '\0';

    int i, count = 0;
    for (i = 0; sen1[i] != '\0'; i++)
    {
        count++;
    }
    int j;
    for (j = 0; sen1[j] != '\0'; j++)
    {
        sen2[j] = sen1[count - 1 - j];
    }

    puts(sen2);

    return 0;
}