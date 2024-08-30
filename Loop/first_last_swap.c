#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
int main()
{
 
    int x, last, first, temp, swap, count = 0;
    scanf("%d", &x);
 
    temp = x;
    last = temp % 10;
    count = (int)log10(temp);
 
    while(temp>=10)
    {
        temp /= 10;
    }
    first = temp;
    swap = (last * pow(10, count) + first) + (x - (first * pow(10, count) + last));
 
    printf("First Digit: %d\n", first);
    printf("Last Digit: %d\n", last);
    printf("%d is swapped to: %d\n", x, swap);
    return 0;
}