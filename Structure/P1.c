#include <stdio.h>

struct tiger
{
    int wickets;
    int match;
    int run;
    char name[100];
    char country[100];
    float avg;
};

int main()
{
    int i, temp = -9999;
    struct tiger ch[3];
    for (i = 0; i < 3; i++)
    {
        fflush(stdin);
        printf("write the %d-Bowler name: ", i + 1);
        gets(ch[i].name);
        // fgets(name, sizeof(name), stdin);
        printf("write the %d-Bowler country name: ", i + 1);
        gets(ch[i].country);
        // fflush(stdin);
        printf("write the %d-Bowler match: ", i + 1);
        scanf("%d", &ch[i].wickets);
        printf("write the %d-Bowler run: ", i + 1);
        scanf("%d", &ch[i].run);
        printf("write the %d-Bowler wicket: ", i + 1);
        scanf("%d", &ch[i].wickets);
        ch[i].avg = ch[i].run / ch[i].wickets;
        // fflush(stdin);
    }

    for (int j = 0; j < 3; j++)
    {
        if (temp < ch[j].avg)
        {
            temp = ch[j].avg;
        }
    }

    for (int j = 0; j < 3; j++)
    {
        if (temp == ch[j].avg)
        {
            printf("Maximum avg Bowler Info:\n\n");
            printf("Name: ");
            puts(ch[j].name);
            printf("Country Name: ");
            puts(ch[j].country);
            printf("Match: %d\n", ch[j].match);
            printf("Run: %d\n", ch[j].run);
            printf("Avg: %f\n", ch[j].avg);
        }
    }
}
