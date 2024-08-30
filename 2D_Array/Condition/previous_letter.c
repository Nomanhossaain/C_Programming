#include<stdio.h>
#include<ctype.h>
int main()
{
    char x;
    printf("Enter a charchter: ");
    scanf("%c", &x);

    printf("%c", tolower(x));
    return 0;
}
/*#include<stdio.h>
int main()
{
    int a=5;
    printf("%d\n", a++);
    printf("%d\n", ++a);
}*/
