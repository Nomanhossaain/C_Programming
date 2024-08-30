#include <stdio.h>
#include <string.h>
int main()
{
    char sen[500];

    fgets(sen, sizeof(sen), stdin);
    sen[strcspn(sen, "\n")] = '\0';

    for (int i = 0; i <= strlen(sen); i++)
    {
        // if (sen[i] >= 97 && sen[i] <= 122)
        // {
        //     sen[i] = sen[i] - 32;
        // }
        // upper to lower:
        if (sen[i] >= 65 && sen[i] <= 90)
        {
            sen[i] = sen[i] + 32;
        }
    }

    puts(sen);

    return 0;
}