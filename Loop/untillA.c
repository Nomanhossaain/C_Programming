#include<stdio.h>

int main()
{
    char ch;
    int i=0;
    while(scanf(" %c",&ch)==1){
        i++;
        if(ch=='A')break;
        printf("Input %d: %c\n",i,ch);
    }

    return 0;
}
