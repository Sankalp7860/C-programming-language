#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d, e, f, g, h, mid;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    d = a > b ? a : b;
    e = d > c ? d : c; // e is max
    f = a < b ? a : b;
    g = f < c ? f : c;           // g is min
    mid = (a + b + c) - (e + g); // middle value
    printf("\nYour Numbers in Ascending order are as follows: \n%d\n%d\n%d ", g, mid, e);
    return 0;
}