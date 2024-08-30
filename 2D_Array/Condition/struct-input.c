#include<stdio.h>

struct person
{
    int age;
    float salary;
};
    
int main()
{
    struct person person1, person2;
    printf("Enter person1 information: \n");
    printf("Enter age: ");
    scanf("%d",&person1.age);
    printf("Enter salary: ");
    scanf("%f",&person1.salary);


    printf("\nPerson1: \n");
    printf("Age= %d\n",person1.age);
    printf("Salary= %.3f\n",person1.salary);


    printf("\n\nEnter person2 information: \n");
    printf("Enter age: ");
    scanf("%d",&person2.age);
    printf("Enter salary: ");
    scanf("%f",&person2.salary);

    printf("\nPerson2: \n");
    printf("Age= %d\n",person2.age);
    printf("Salary= %.3f\n",person2.salary);

    return 0;

}