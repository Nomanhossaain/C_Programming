#include <stdio.h>
#include <string.h>
int main()
{
    int rollno, phy, che, it, total;
    float percentage;
    char name[20], div[10];
    
    printf("\nInput the Roll Number of the student: ");
    scanf("%d", &rollno);
    
    printf("Input the Name of the Student: ");
    scanf("%s", name);
     
    printf("Input the marks of Physics: ");
    scanf("%d", &phy);
    printf("Input the marks of Chemisty: ");
    scanf("%d", &che);
    printf("Input the marks of Information Technology: ");
    scanf("%d", &it);
    
    total=phy+che+it;
    percentage=total/3.0;
    
    if(percentage>=60)
    strcpy(div, "First");
    
    else
    {
        if(percentage < 60 && percentage >= 48)
        strcpy(div,"Second");
        
        else
        if(percentage <48 && percentage >= 36)
        strcpy(div, "Pass");
        
        else
        strcpy(div, "Fail");
        printf("\nRoll No: %d\nName of Student: %s\n", rollno, name);
        printf("Marks in Physics: %d\nMarks in Chemistry: %d\nMarks in Information Technology: %d\n", phy, che, it);
        printf("Total Mark = %d\nPercentage= %5.2f\nDivision= %s\n", total, percentage, div);
    }
}