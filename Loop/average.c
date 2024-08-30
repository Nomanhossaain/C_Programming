#include<stdio.h>
int main()
{
    int a,i;
    double input,avg,sum=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%lf",&input);
        sum=sum+input;
    }
    
    avg=sum/a;
    printf("AVG of %d inputs:%lf",a,avg);

    return 0;
}