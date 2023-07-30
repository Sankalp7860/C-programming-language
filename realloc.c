#include <stdio.h>
#include<stdlib.h>
int main()
{
// using calloc
int a=0;
printf("Enter the number of elements in array: ");
scanf("%d",&a);
int *p = (int*) calloc(a,sizeof(int));
printf("Please Enter the array of size %d: ",a);
for (int i = 0; i < a; i++)
{
    scanf("%d",&p[i]);
}
// using malloc
// int a=0;
// printf("Enter the number of elements in array: ");
// scanf("%d",&a);
// int *p = (int*) malloc(a*sizeof(int));
// printf("Please Enter the array of size %d: ",a);
// for (int i = 0; i < a; i++)
// {
//     scanf("%d",&p[i]);
// }


//using realloc
int b=0;
printf("Enter the number of elements in the new array: ");
scanf("%d",&b);
int *q = (int*) realloc(p,b*sizeof(int));
printf("Please Enter the new array of size %d: ",b);
for (int i = 0; i < b; i++)
{
    scanf("%d",&q[i]);
}

for (int i = 0; i < b; i++)
{
    printf("%d ",q[i]);
}


free(p);
free(q);
    return 0;
}