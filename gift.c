#include <stdio.h>
int main ()
{
int sub ;
printf("Enter which all subject you passed : \n");
printf("1 for maths and science  \n  2 for maths  \n  3 for science : \n");
scanf("%d",&sub);
if(sub==1)
{
    printf("45 rupee gift ");
}
else if (sub==2)
{
    printf("15 rupee gift ");
}
 else if(sub==3)
    {
    printf("15 rupee gift ");
}
else 
{
    printf("Wrong choice :");
 }
return 0;
}