#include<stdio.h>
    int main(){
    int x, y, z, a;
    printf("Enter three Integer numbers for x, y, z,a : \n");
    scanf("%d %d %d %d", &x, &y, &z, &a);
    if(x < y && x < z && x<a)
    printf("x is smallest: %d",x);
    else if
    
    (y<x && y<z && y<a)
    printf("y is smallest: %d",y);
    
    else
    {
    if(z<x && z<y && z<a)
    printf("z is smallest: %d",z);
    else
    printf("a is smallest: %d",a);
    }
    return(0);
    }

  