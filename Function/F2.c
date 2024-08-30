#include <stdio.h>

void suzana()
{
    printf("I am in suzana() function\n");
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b){
        printf("%d is the Maximum Number\n", a);
    }
        
    else{
        printf("%d is the Maximum Number\n", b);
    }
    printf("I am going out of suzana() function\n");   
    
}

int main()
{
    printf("I am in main() function\n");
    suzana();
    printf("I am going out of main() function\n");
    return 0;
}