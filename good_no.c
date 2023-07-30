#include <stdio.h>
int main()
{
    int a;
printf("Please Enter The Number: ");
scanf("%d", &a);
if (a%7==0 && a%13==0)
    printf("Your Number is not Good");
else if (a%7 !=0 && a%13!=0)
    printf("Your Number is not Good");
else 
    printf("Your Number is Good");
return 0;
}


//for OR command Use  ||