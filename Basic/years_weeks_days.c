#include <stdio.h>
int main()
{
    int ndays, days, years, weeks, months;
    printf("Enter days: ");
    scanf("%d", &ndays);
    years= ndays/365;
    months= ndays/30;
    weeks= ndays/7;
    days= (ndays % 365)%7;
    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d", days);
    return 0;
}