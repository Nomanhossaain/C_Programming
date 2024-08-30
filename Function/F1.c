#include <stdio.h>

int suzana(int x, int y);

int main()
{
    printf("I am in main() function\n");
    int a, b;
    scanf("%d %d", &a, &b);
    // int max = suzana(a,b);
    // printf("%d is the Maximum number", max);
    printf("%d is the Maximum number\n", suzana(a,b));
    printf("I am going out of main() function\n");
    return 0;
}

int suzana(int x, int y)
{
    printf("I am in suzana() function\n");
    if (x > y){
        printf("I am going out of suzana() function\n");
        return x;
    }
        
    else{
        printf("I am going out of suzana() function\n");
        return y;
    }   
}