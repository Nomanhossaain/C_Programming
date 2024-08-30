#include<stdio.h>

int main() 
{
   int length, width, area;
   printf("\nEnter length of rectangle: ");
   scanf("%d", &length);
   printf("\nEnter breadth of rectangle: ");
   scanf("%d", &width);
   area= length*width;
   printf("\nArea of rectangle: %d", area);
   
   return 0;
}