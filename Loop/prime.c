#include <stdio.h>

int main(){
    int i,n, flag=1;
    scanf("%d", &n);
    for(i=2; i<=n-1; i++){
     if(n%i==0){
          flag=0;
          break;
     }
    }
    if(flag==1 && n!=1)
    {
     printf("%d is Prime\n", n);
    }
    else{
     printf("%d is Not prime\n", n);
    }


}