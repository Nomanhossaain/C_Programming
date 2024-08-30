#include<stdio.h>
int main()
{
    srand(time(0));
    int you;
    int computer=(rand()%3)+1;

    printf("Game Instruction\n1=Rock, 2=Scisser, 3=Paper\n...................................................");
    printf("\nPlease inter your selection:");
    scanf("%d",&you);
    if(you>=1 && you<4)
    {
        printf("\n You selected: %d, Computer selected: %d\n",you, computer);
        if(you==1 && computer==1)
        {
            printf("It is draw");
        }
        if("you==1 && computer==2")
        {
            printf("You win");
        }
        if(you==1 && computer==3)
        {
            printf("Computer Win");
        }


        if(you==2 && computer==1)
        {
            printf("Computer Win");
        }
        if("you==2 && computer==2")
        {
            printf("It is draw");
        }
        if(you==2 && computer==3)
        {
            printf("You win");
        }


        if(you==3 && computer==1)
        {
            printf("You win");
        }
        if("you==3 && computer==2")
        {
            printf("Computer Win");
        }
        if(you==3 && computer==3)
        {
            printf("It is draw");
        }
    }

    else
    {
        ("Invalid selection");
    }
    return 0;
}