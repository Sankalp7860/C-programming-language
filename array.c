#include <stdio.h>
int main()
{
int marks[4];
printf("size is:%d",(sizeof(marks)/sizeof(marks[0])));
for (int i = 0; i < 4; i++)
{
printf("Enter the value of %d element of the array: \n", i);
scanf ("%d", &marks[i]);
}
for (int i = 0; i < 4; i++)
{
printf("The value of %d element of the array is %d\n", i, marks[i]);
}
return 0;
}


/*#include <stdio.h>
int main()
{
int marks[4]={2,4,5,8};      Defining the values here.......
for (int i = 0; i < 4; i++)
{
printf("The value of %d element of the array is %d\n", i, marks[i]);
}
return 0;
}
*/
