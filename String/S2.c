#include <stdio.h>
#include <string.h>

int main()
{
    char sen1[1000];
    char sen2[1000];

    printf("1st sen: ");
    fgets(sen1, sizeof(sen1), stdin);
    sen1[strcspn(sen1, "\n")] = '\0';

    printf("2nd sen: ");
    fgets(sen2, sizeof(sen2), stdin);
    sen2[strcspn(sen2, "\n")] = '\0';

    int i, count = 0;
    for (i = 0; sen1[i] != '\0'; i++)
    {
        count++;
    }

    sen1[i] = ' ';
    count++;
    int j;
    for (j = 0; sen1[j] != '\0'; j++)
    {
        sen1[count + j] = sen2[j];
    }

    puts(sen1);
    // strcat(sen1, sen2);
    // puts(sen1);
}