#include <stdio.h>
int sum(int a, int b){
    return a+b;
}
void greetHelloAndExecute(int(*fptr)(int,int)){
    printf("Hello user\n");
    printf("The sum of 1 and 2 is: %d\n",fptr(1,2));
}
void greetGmAndExecute(int(*fptr)(int,int)){
    printf("Good Morning user\n");
    printf("The sum of 1 and 2 is: %d\n",fptr(1,2));
}
int main()
{
    //printf("The sum of 1 and 2 is: %d\n",sum(1,2));//Testing the function
    int (*fptr) (int,int);//Declaration a function pointer
    fptr=&sum;//Creating a function pointer
    //int d=(*fptr)(1,2);// Deferencing a function pointer
   // printf("The sum of 1 and 2 using function pointer is: %d",d);
   greetGmAndExecute(fptr);
    return 0;
}