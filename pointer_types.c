#include <stdio.h>
#include <stdlib.h>
int * functionDangling(){
    int a,b,sum;
    a=2;
    b=4;
    sum=a+b;
    return &sum;
}
int main()
{
                                        //VOID POINTER
    /*int a=8;
    float b= 2.43;
    void *ptr;
    ptr=&a;
    printf("The value of a is : %d\n",(*(int *)ptr));
    ptr=&b;
    printf("The value of b is : %f",(*( float *)ptr));*/
    
                                        //NULL POINTER
   /* int a=34;
   // int * ptr=NULL;
   int *ptr =&a;
    if (ptr!= NULL)
    {
        printf("the address of a is %d:",ptr);
    }
    else
    {
        printf("the pointer is a null pointer and cannot be deferenced\n");
        
    }*/
    
                                        //DANGLING POINTER
   /* //case 1: De allocation of a memory block
    int * ptr=(int *)malloc (7*sizeof(int));
    ptr[0]=34;   
    ptr[1]=38;   
    ptr[2]=3;   
    ptr[3]=4;   
    ptr[4]=35;   
    free(ptr);
    //case 2: Function returning local variable address
    int * dangptr=functionDangling();
    //case 3: if a variable goes out of scope
    int * danglingptr3;
    {
        int a=5;
        danglingptr3=&a;
    }  */
    
                                        //WILD POINTER
    int a=34;
    int *ptr;//This is a wild pointer
    *ptr=3;//overwriting the garbage location, not a good thing
    ptr=&a;//no longer a wild pointer
    printf("The value of a is %d",*ptr); 
    return 0;
}