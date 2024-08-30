#include<stdio.h>

struct person  //Global struct
{
    int age;
    float salary;
};
    //struct person person1, person2; //Global variable
int main()
{
    //struct person Local struct
    struct person person1, person2; //Local variable
    person1.age= 21;
    person1.salary=12500.50;

    printf("\nPerson1: \n");
    printf("Age= %d\n",person1.age);
    printf("Salary= %.3f\n",person1.salary);


    person2.age= 25;
    person2.salary=15500.50;

    printf("\nPerson2: \n");
    printf("Age= %d\n",person2.age);
    printf("Salary= %.3f\n",person2.salary);

    return 0;

}