#include<stdio.h>
#include <math.h>
int main()
{
int x,a,b,c,quad;
printf("Please Enter the value of X: ");
scanf("%d", &x);
printf("Please Enter the value of a: ");
scanf("%d", &a);
printf("Please Enter the value of b: ");
scanf("%d", &b);
printf("Please Enter the value of c: ");
scanf("%d", &c);
quad=((a*(pow(x,2)))+(b*x)+c);
printf("Your solved equation is: %d",quad);
return 0;
}