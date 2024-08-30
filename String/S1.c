#include <stdio.h>
#include <string.h>
int main()
{
    char sen[1000];

    fgets(sen, sizeof(sen), stdin);
    sen[strcspn(sen, "\n")] = '\0';

    int count = 0;
    for (int i = 0; sen[i] != '\0'; i++)
    {
        count++;
    }

    printf("\n%d", count);

    return 0;
}