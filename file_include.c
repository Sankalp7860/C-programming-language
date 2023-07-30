#include <stdio.h>
#include "ascii.c"
#define PI 3.14
#define square(r) r*r
int main()
{
    int r=4;
    printf("The value of PI is %f\n",PI);
    printf("The value of area of radius 4 is %f",PI * square(r));

    return 0;
}