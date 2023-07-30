#include <stdio.h>
typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;
int main()
{
   // int* a,b;
    typedef int* intpointer;
    intpointer a,b;
    int c=3;
    a=&c;
    b=&c;
    printf("The adress of c is: %p\n",a);
    printf("The adress of c is: %p\n",b);

     /*std Sankalp, Nikhil;
    Sankalp.id = 1001;
    Nikhil.id = 1002;
    printf("The id of Sankalp is: %d\n",Sankalp.id);
    printf("The id of Nikhil  is: %d\n",Nikhil.id);
    */
    
    
    
    /*typedef int i;
    i n,a;
    n=1;
    a=2;
    printf("The sum of %d and %d is : %d",n,a,n+a);*/
    return 0;
}