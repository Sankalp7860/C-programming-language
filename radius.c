#include <stdio.h>
#include <math.h>
int main()
{
    double circ=6.742;
    double radius=0.0;
    double a=2* M_PI;
    radius = 6.742/a;
    double area= 0.0;
    area = M_PI * radius * radius;
    printf("Area is : %lg",area);
    return 0;
}