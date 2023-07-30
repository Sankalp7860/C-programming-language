#include <stdio.h>
int main()
{
    int a,b;
printf("Please Enter The Value of a: ");
scanf("%d", &a);
printf("Please Enter The Value of b: ");
scanf("%d", &b);
a^=b;
b^=a;
a^=b;
printf("Your Swapped Value of a: %d \n ",a);
printf("Your Swapped Value of b: %d ",b);
return 0;
}



