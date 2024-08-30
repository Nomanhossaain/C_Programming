#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);
    int i, words = 0, vowels = 0, consonants = 0;
    for (i = 0; i < length; i++)
    {
        char temp = tolower(str[i]);
        if (temp == ' ')
        {
            words++;
        }
        else
        {
            if (temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }
    printf("Words: %d\n", words + 1);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Letters: %d\n", vowels + consonants);
}