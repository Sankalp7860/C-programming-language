#include <stdio.h>
#include <stdarg.h>
double add(int n,...){
    va_list list;
    va_start(list,n);
    double sum=0.0;
    for (int i = 0; i < n; i++){
        sum+=va_arg(list,double);}
    va_end(list);
    return sum;
    }
int main()
{
    printf("%lg\n",add(3,2.3,1.0,3.0));
    return 0;
} 
