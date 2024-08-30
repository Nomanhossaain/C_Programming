#include<stdio.h>
int main()
{
    int x, y, p;
    scanf("%d %d",&x, &y);
    while(x>y)
    {
        p=x*x;
        x--;
        printf("%d, ", p);
    }
    while(x<y){
       p=x*x;
        x++;
        printf("%d, ", p); 
    }
    
    if(x==y){
    printf("Reached!");
    }
    return 0;
}