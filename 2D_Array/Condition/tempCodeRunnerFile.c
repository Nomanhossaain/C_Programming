/*#include<stdio.h>
int main()
{
    int x, y, z, max;
    scanf("%d %d %d", &x, &y, &z);
    max= x > y ? (x > z ? x : z) : (y > z ? y : z);
    printf("Max: %d", max);
    return 0;
}*/
#include<stdio.h>
int main()
{   
    int i, sum;
    i = 1;
    sum = 5;
    for (i = 1; i < 4; i++)
    {
        sum += i;
        printf("%d", sum);
    }
}