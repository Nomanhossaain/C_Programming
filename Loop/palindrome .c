#include <stdio.h>

int main(){
    int num,r,sum=0,t;

    printf("Input a number: ");
    scanf("%d",&num);

    for(t=num;num!=0;num=num/10){
         r=num % 10;
         sum=sum*10+r;
    }
    if(t==sum)
         printf("%d Yes\n",t);
    else
         printf("%d No\n",t);

}