#include <stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    srand(time(NULL));//srand takes seed as an input and is defined inside stdlib.h
    printf("The random number between 1 and 6 is: %d ",(rand()%5)+1);
    return 0;
}