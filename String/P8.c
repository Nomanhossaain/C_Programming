#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], str2[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    // fgets(str2, sizeof(str2), stdin);
    // str2[strcspn(str2, "\n")] = '\0';

    // Length:

    // int x = strlen(str);
    // printf("%d", x);
    // int i, count = 0;
    // for (i = 0; str[i] != '\0'; i++)
    // {
    //     count++;
    // }
    // // i++;
    // printf("%d", count);

    // Add:

    // int i, count = 0;
    // for (i = 0; str[i] != '\0'; i++)
    // {
    //     count++;
    // }
    // str[i] = ' ';
    // count++;
    // int j;
    // for (j = 0; str[j] != '\0'; j++)
    // {
    //     str[count + j] = str2[j];
    // }
    // printf("%s", str);

    // Vowel:

    // int count = 0;
    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u')
    //     {
    //         count++;
    //     }
    // }
    // printf("%d", count);

    // Word:

    // int count = 0;
    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     if (str[i] == ' ')
    //     {
    //         count++;
    //     }
    // }
    // printf("%d", count + 1);

    // Reverse:

    // int count = 0;
    // for (int i = 0; str[i] != '\0'; i++)
    // {

    //     count++;
    // }
    // int i;
    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     str2[i] = str[count - 1 - i];
    // }
    // puts(str2);

    // lowercase string to uppercase:
    // for (int i = 0; i <= strlen(str); i++)
    // {
    //     if (str[i] >= 97 && str[i] <= 122)
    //     {
    //         str[i] = str[i] - 32;
    //     }
    // }
    // puts(str);

    // uppercase string to lowercase:

    // for (int i = 0; i <= strlen(str); i++)
    // {
    //     if (str[i] >= 65 && str[i] <= 96)
    //     {
    //         str[i] = str[i] + 32;
    //     }
    // }
    // puts(str);

    // toggle the cas:

    // for (int i = 0; i <= strlen(str); i++)
    // {
    //     if (str[i] >= 97 && str[i] <= 122)
    //     {
    //         str[i] = str[i] - 32;
    //     }
    //     else if (str[i] >= 65 && str[i] <= 90)
    //     {
    //         str[i] = str[i] + 32;
    //     }
    // }
    // puts(str);

    // Alphabetic Order:
    int p = 0;
    for (int i = 0; i <= 127; i++)
    {
        int j = 0;
        while (str[j] != '\0')
        {
            if (i == str[j])
            {
                str2[p] = str[j];
                p++;
            }
            j++;
        }
        str2[j] = '\0';
    }
    puts(str2);
}
