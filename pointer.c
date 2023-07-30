/*#include <stdio.h>
int main()
{
    int a=76;
    int *ptra=&a;
    int *ptr2=NULL;
   printf(" The adress of pointer to a is %p\n",&ptra);// %x is for hexadecimal
   printf(" The adress of a is %p\n",&a);
   printf(" The adress of a is %p\n",ptra);
   printf(" The adress of NULL is %p\n",ptr2);
   printf(" The value of a is %d\n",*ptra);
   printf(" The value of a is %d\n",a);
  return 0;
} */

#include <stdio.h>
int main()
{
    int arr[]={1,3,2,5,7,6};
    printf("The value at position 3 of the array is %d \n",arr[3]);
    printf("The adress of the first element of the array is %d   \n",&arr[0]);
    printf("The adress of the second element of the array is %d  \n",&arr[1]);
    printf("The adress of the second element of the array is %d  \n", &arr + 1);


    printf("The value at adress of the first element of the array is %d \n", *(&arr[0]));
    printf("The value at adress of the second element of the array is %d \n",*(&arr[1]));
    printf("The value at adress of the second element of the array is %d \n",*(&arr + 1));
    return 0;
}
