#include <stdio.h>
int main()
{
int a,b,c,d,e,f,g,h,i,j,k,Y,N,l;
printf("Enter Your Five Digit Number:");
scanf("%d", &a);
b=a/10000;
c=(b*10000)-a;
d=c/1000;
e=(d*1000)-c;
f=e/100;
g=(f*100)-e;
h=g/10;
i=(h*10)-g;
j= b==i ? Y : N;
k= d==h ? Y : N;
printf("Number is Palindrome(Y/N): %c",(j==Y && k==Y) ? 'Y': 'N');
return 0;
}