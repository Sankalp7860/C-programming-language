#include <stdio.h>
int fibonacci(int n)
{
    if(n==1 || n==2)
    {
        return n-1;
    }
    else
    {
     return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main()
{
int n;
printf("Enter the number of term of fibonacci series which you want to find: ");
scanf("%d",&n);
printf("Your number is: %d",fibonacci(n));
return 0;
}