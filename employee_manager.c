#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct Employee
{
    char* id;

};
int main()
{
struct Employee Employee1,Employee2,Employee3;
//for Employee 1
int a;
printf("Enter the length of the Employee id of the Employee1: ");
scanf("%d",&a);
Employee1.id=(char*) calloc(a,sizeof(char));
printf("Enter the Employee id: ");
scanf("%s",Employee1.id);
printf("\nYour Employee id is: %s \n\n",Employee1.id);
//for Employee 2
int b;
printf("Enter the length of the Employee id of the Employee2: ");
scanf("%d",&b);
Employee2.id=(char*) realloc(Employee1.id,b*sizeof(char));
printf("Enter the Employee id: ");
scanf("%s",Employee2.id);
printf("\nYour Employee id is: %s \n\n",Employee2.id);

//for Employee 3
int c;
printf("Enter the length of the Employee id of the Employee3: ");
scanf("%d",&c);
Employee3.id=(char*) realloc(Employee2.id,c*sizeof(char));
printf("Enter the Employee id: ");
scanf("%s",Employee3.id);
printf("\nYour Employee id is: %s \n\n",Employee3.id);

    return 0;
}