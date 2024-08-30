#include <stdio.h>
 
int main()
{
    int month;
    
    printf("\nEnter the number of month (1-12): ");
    scanf("%d", &month); 
 
    if(month == 1)
    {
        printf("Name of of month is January \nNumber of days: 31 days");
    }
    else if(month == 2)
    {
        printf("Name of month is February \nNumber of days: 28 or 29 days");        
    }
    else if(month == 3)
    {
        printf("Name of month is March \nNumber of days: 31 days");        
    }
    else if(month == 4)
    {
        printf("Name of month: April \nNumber of days: 30 days");        
    }
    else if(month == 5)
    {
        printf("Name of month is May \nNumber of days: 31 days");
    }
    else if(month == 6)
    {
        printf("Name of month is June \nNumber of days: 30 days");        
    }
    else if(month == 7)
    {
        printf("Name of month is July \nNumber of days: 31 days");        
    }
    else if(month == 8)
    {
        printf("Name of month is August \nNumber of days: 31 days");
    }
    else if(month == 9)
    {
        printf("Name of month is September \nNo. of days: 30 days");
    }
    else if(month == 10)
    {
       printf("Name of month is October \nNo. of days: 31 days");
    }
    else if(month == 11)
    {
        printf("Name of month is November \nNumber of days: 30 days");
    }
    else if(month == 12)
    {
        printf("Name of month is December \nNunber of days : 31 days");;
    }
    else
    {
        printf("Invalid input! Please enter month number between (1-12).");
    }
 
    return 0;
}