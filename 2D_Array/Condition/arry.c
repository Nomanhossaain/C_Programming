#include<stdio.h>

struct person
{
    char name[30];
    int age;
    float salary;
};
    
int main()
{
    struct person person[4];
    int i;

    for(i= 1; i<5; i++)
    {
        printf("Enter information for person:%d\n",i);
        printf("Enter name: ");
        fflush(stdin);
        gets(person[i].name);
        printf("Enter age: ");
        scanf("%d",&person[i].age);
        printf("Enter salary: ");
        scanf("%f",&person[i].salary);
    }
    
    for(i=1; i<5; i++)
    {
        printf("\n\nInformation for person: %d\n", i);
        printf("Name: %s\n", person[i].name);
        printf("Age: %d\n", person[i].age);
        printf("Salary: %f\n", person[i].salary);
    }
    return 0;

}