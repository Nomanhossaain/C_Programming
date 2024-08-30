#include <stdio.h>
#include <string.h>

int main()
{
    char sen[1000];

    fgets(sen, sizeof(sen), stdin);
    sen[strcspn(sen, "\n")] = '\0';

    int i, count = 0;
    for (i = 0; sen[i] != '\0'; i++)
    {
        if (sen[i] == 'a' || sen[i] == 'e' || sen[i] == 'i' || sen[i] == 'o' || sen[i] == 'u' || sen[i] == 'A' || sen[i] == 'E' || sen[i] == 'I' || sen[i] == 'O' || sen[i] == 'U')
        {
            count++;
        }
    }

    printf("\n%d", count);

    return 0;
}