#include <stdio.h>
 int main()
 {
    int num,sum;
    printf("Please Enter the Five Digit Number: ");
    scanf("%d",&num);
    int rem1,rem2,rem3,rem4,rem5;
    rem1=num%10;
    num=num/10;
    rem2=num%10;
    num=num/10;
    rem3=num%10;
    num=num/10;
    rem4=num%10;
    num=num/10;
    rem5=num%10;

    sum=rem1+rem2+rem3+rem4+rem5;
     printf("Your Digits Sum is : %d", sum);

     return 0;
 }