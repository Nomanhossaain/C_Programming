#include<stdio.h>
int main()
{
    int i, num;
    scanf("%d", &num);

    for(i=0; num > 0; num = num / 10)
    {
        i= i * 10;
        i= i + (num % 10);
    }
    printf("%d ", i);
}

//while:
/*#include<stdio.h>
int main()
{
    int i, num;
    scanf("%d", &num);
    i=0;
    for( num > 0)
    {
        i= i * 10;
        i= i + (num % 10);
    }
    printf("%d ", i);
    num = num / 10;
}*/