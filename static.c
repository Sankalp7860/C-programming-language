#include <stdio.h>
int func1(int b){
    static int a=0;
    a++;
    return a+b;
}
int main()
{
    int b=1;
    printf("the value of a1 is :%d\n ",func1(b));
    printf("the value of a2 is :%d\n ",func1(b));
    printf("the value of a3 is :%d\n ",func1(b));
    printf("the value of a4 is :%d\n ",func1(b));
    return 0;
}