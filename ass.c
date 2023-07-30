#include <stdio.h>
int main()
{
    char a,b;
    char * ptr;
    printf("Enter a:");
    scanf("%c",&a);
    getchar();
    printf("Enter b:");
    scanf("%c",&b);
    printf("\na and b are: %c, %c ",a,b);
    gets(ptr);
    return 0;
}