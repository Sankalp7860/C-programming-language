#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int random_number(int n){
    srand(time(NULL));
    return rand()% n;
}
int main()
{
char a[30],c;
int n,b,win=0,loose=0;
printf("Please Enter the player's Name: ");
scanf("%s",a);
printf("Hello %s,\n",a);
start:
win=0;
loose=0;
printf("\n\t*** Welcome To Rock, Paper, Scissors Game *** \n\n");
printf("\n\t~~ Press 1: for Rock ~~\n");
printf("\n\t~~ Press 2: for Paper ~~\n");
printf("\n\t~~ Press 3: for Scissors ~~\n");
printf("\n\t~~ There will be 3 rounds & You have to win 2 rounds to win the game ~~\n");

for (int i = 0; i < 3; i++)
{
    printf("\t** Round Number %d **\n",i+1);
    printf("%s's Turn:\n",a);
    printf("Enter Your Choice: ");
    scanf("%d",&b);
    getchar();
    n=random_number(3) +1;
    printf("Computer's Turn:\n");
    printf("Computer Choice is: %d\n",n);
    if (b==n)
    {
        printf("This Round is a Draw\n");
        printf("We will restart the round\n");
        i=i-1;
        continue;
    }
    else if ((b==1 && n==3) || (b==3 && n==2) || (b==2 && n==1))
    {
        printf("%s Win this round\n",a);
        win++;
    }
    
    else
    {
        printf("Computer Win this round\n");
        loose++;
    }
}
printf("\n");
printf("\n");
printf("\t*** Displaying the points Table ***\n");
printf("-------------------\n");
printf(" %s | Computer\n",a);
printf("  %d     |  %d \n",win,loose);
printf("-------------------\n");
if (win>loose)
{
    printf("\t*** Congratulations %s Won the game ***\n",a);
    printf("Do you Want to play again(Y/N): ");
    scanf("%c",&c);
    if (c=='Y' || c=='y')
    {
        goto start;
    }
    else
    {
        goto end;
    }
}
else
{
    printf("\t*** Computer Won the game ***\n");
    printf("\t*** Better luck next time ***\n");
    printf("Do you Want to play again(Y/N): ");
    scanf("%c",&c);
    if (c=='Y' || c=='y')
    {
        goto start;
    }
    else
    {
        goto end;
    }
}
end:

return 0;
}