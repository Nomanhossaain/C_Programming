#include<stdio.h>
int main()
{
    float a,hw,ct,mt,tf,sum;
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%f %f %f %f %f",&a,&hw,&ct,&mt,&tf);
        
        mt=mt*0.60;
        tf=tf*0.40;
        sum=(a+hw+ct+mt+tf);
        if(sum>=90 && sum<=100){
            printf("student-%d:A",i);
        }
        else if(sum>=86 && sum<=89){
            printf("student-%d:A-",i);
        }
        else if(sum>=82 && sum<=85){
            printf("student-%d:B+",i);
        }
        else if(sum>=78 && sum<=81){
            printf("student %d:B",i);
        }
        else if(sum>=74 && sum<=77){
            printf("student %d:B-",i);
        }
        else if(sum>=70 && sum<=73){
            printf("student %d:C+",i);
        }
        else if(sum>=66 && sum<=69){
            printf("student %d:C",i);
        }
        else if(sum>=62 && sum<=65){
            printf("student %d:C-",i);
        }
        else if(sum>=58 && sum<=61){
            printf("student %d:D+",i);
        }
        else if(sum>=55 && sum<=57){
            printf("student %d:D",i);
        }

        else{
            printf("Student %d:F",i);
        }
    }
    return 0;
}