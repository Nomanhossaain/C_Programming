#include<stdio.h>
int main(){
    int x, y, p, i, a;
    printf("Enter the first value:");
    scanf("%d", &x);
    printf("Enter the second value:");
    scanf("%d", &y);
    a=y;
    for(i=1; i<=y; i++)
    {
        printf("Enter the next value:");
        scanf("%d", &p);

        if (x==p)
        {
            printf("Right, Player-2 wins");
        }
        else if(x!=p && a>1)
        {
            printf("Worng, %d Choice(s) Left!\n", a=a-1);
        }
        else
        {
            printf("Player-1 wins!");
        }
    }
    return 0;
}