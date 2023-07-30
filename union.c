#include <stdio.h>
#include<string.h>
  /*struct student{
        int id;
        int marks;
        char fav_char;
        char name[34];
        };*/

union student{
        int id;
        int marks;
        char fav_char;
        char name[34];
        };
int main()
{
  union student s1;
  s1.marks=99;
  strcpy(s1.name,"Sankalp");
  s1.fav_char='c';
  s1.id=1001;
    printf("The name of student is: %s\n",s1.name);
    printf("The id of %s is:%d\n",s1.name,s1.id);
    printf("The marks of %s is:%d\n",s1.name,s1.marks);
    printf("The favourite character of %s is:%c\n",s1.name,s1.fav_char);
  
  
  
  /*struct student s1;
  s1.id=1001;
  s1.marks=99;
  s1.fav_char='c';
  strcpy(s1.name,"Sankalp");
    printf("The name of student is: %s\n",s1.name);
    printf("The id of %s is:%d\n",s1.name,s1.id);
    printf("The marks of %s is:%d\n",s1.name,s1.marks);
    printf("The favourite character of %s is:%c\n",s1.name,s1.fav_char);*/

    return 0;
}