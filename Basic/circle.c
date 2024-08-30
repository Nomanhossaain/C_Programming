#include<stdio.h>
#define PI 3.1416

int main(){
  float radius, area;
  printf("Enter Radius: ");
  scanf("%f", &radius);
  area = PI*radius*radius;
  printf("Area of the circle=%f\n", area);
  return 0;
}