#include <stdio.h>

struct person
{
    char name[100];
    char country[100];
    int run;
    int wicket;
    int match;
    float avg;
};

int main()
{
    struct person c[100];
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Name of %d player: ", i + 1);
        gets(c[i].name);
        printf("Country of %d player: ", i + 1);
        gets(c[i].country);
        printf("Wicket of %d player: ", i + 1);
        scanf("%d", &c[i].wicket);
        printf("Run of %d player: ", i + 1);
        scanf("%d", &c[i].run);
        printf("Match of %d player: ", i + 1);
        scanf("%d", &c[i].match);
        c[i].avg = ((float)(c[i].run) / c[i].wicket);
    }
    int max = -9999, c1 = 0;
    for (i = 0; i < n; i++)
    {
        if (max < c[i].avg)
        {
            c1 = i;
            max = c[i].avg;
        }
    }
    printf("Name: %s", c[c1].name);
    printf("\nCountry: %s", c[c1].country);
    printf("\nRun: %d", c[c1].run);
    printf("\nMatch: %d", c[c1].match);
    printf("\nWicket: %d", c[c1].wicket);
    printf("\nAvarage: %f", c[c1].avg);
}