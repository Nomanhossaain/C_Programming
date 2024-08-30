#include <stdio.h>
#include <string.h>

int main()
{

    char sen1[100], sen2[100];
    fgets(sen1, sizeof(sen1), stdin);
    sen1[strcspn(sen1, "\n")] = '\0';
    int i = 0;
    while (sen1[i] != '\0')
    {
        int j = i - 1;
        while (j >= 0)
        {
            if (sen1[i] == sen1[j])
            {
                int k = i;
                while (sen1[k] != '\0')
                {
                    sen1[k] = sen1[k + 1];
                    k++;
                }
                i--;
            }
            j--;
        }
        i++;
    }

    puts(sen1);
}