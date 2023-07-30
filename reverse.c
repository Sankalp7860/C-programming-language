#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Five Digit Number: ");
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
    num=num/10;
     printf("%d",(rem5*1)+(rem4*10)+(rem3*100)+(rem2*1000)+rem1*10000);


    return 0;
}
