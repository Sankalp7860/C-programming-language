#include <stdio.h>
void sum_subtract(int* a,int* b)
{
    int temp1,temp2;
    temp1=*a;
    temp2=*b;
    *a=temp1+temp2;
    *b=temp1-temp2;
    
}

int main()
{
    int a,b;
    printf("Enter the value of a is: ");
    scanf("%d",&a);    
    printf("Enter the value of a is: ");    
    scanf("%d",&b);
    printf("\nThe current value of a is: %d\n",a);    
    printf("The current value of a is: %d\n",b);    
    sum_subtract(&a,&b);
    printf("\n''''''The current value of a and b after sum and subtract is''''''\n");    
    printf("'''''' a is sum of two numbers and b is subtract of two numbers''''''\n\n");    
    printf("Value of a is: %d\n",a);    
    printf("Value of b is: %d\n",b);    
    return 0;
}