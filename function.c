#include <stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int main()
{
int a,b,c,d;
printf("Enter The Value Of a: ");
scanf("%d",&a);
printf("Enter The Value Of b: ");
scanf("%d",&b);
c=sum(a,b);
d=sub(a,b);
printf("The Sum is: %d \n",c);
printf("The Difference is: %d \n",d);
return 0;
}