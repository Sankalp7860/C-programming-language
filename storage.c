#include <stdio.h>
int f(int a, int b){
    extern int sum;
 //auto int sum= a+b;//auto is default this doesn't have change
return sum;
}
int sum=21;  
//Declaration-Telling the compiler about the variable(No space reserved)
//Definition-Declaration +space reservation
int main()
{
  register  int sum;
 sum= f(2,3);
    printf("sum is: %d",sum);
    return 0;
}