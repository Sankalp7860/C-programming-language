#include <stdio.h>
int main()
{
    int a,b,c;
printf("Please Enter The Value of a: ");
scanf("%d", &a);
printf("Please Enter The Value of b: ");
scanf("%d", &b);
printf("Please Enter The Value of c: ");
scanf("%d", &c);
int max=0;
max = a>b ? a : b ;
printf("Your Maximum Number is: %d", max>c ? max : c );
return 0;
}