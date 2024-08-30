#include<stdio.h>
int main()
{
    int a;
    char b;
    long c;
    float d;
    double e;
    short f;
    long long g;

    printf("Size of int: %lu bytes\n", sizeof(a));
    printf("Size of char: %lu bytes\n", sizeof(b));
    printf("Size of long: %lu bytes\n", sizeof(c));
    printf("Size of float: %lu bytes\n", sizeof(d));
    printf("Size of double: %lu bytes\n", sizeof(e));
    printf("Size of short: %lu bytes\n", sizeof(f));
    printf("Size of long long: %lu bytes", sizeof(g));

    return 0;
}