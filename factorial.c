#include<stdio.h>
int factorial(num)
{
    if (num==0 || num==1){
     return 1;
     }
     else{
        return(num* factorial(num-1));
    
     }
}
int main()
{
int a;
printf("Please Enter the Number Whose factorial you Want: ");
scanf("%d",&a);
printf("\nThe Factorial of %d is: %d\n", a, factorial(a));
return 0;
}