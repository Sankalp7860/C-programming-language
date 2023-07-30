#include <stdio.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    struct Student Sankalp, Nikhil;
    Sankalp.id = 1001;
    Nikhil.id = 1002;
    Sankalp.marks = 99;
    Nikhil.marks = 02;
    Sankalp.fav_char = 'f';
    Nikhil.fav_char = 's';
    printf("Enter the name of the  1st student  : ");
    fgets(Sankalp.name, 34, stdin);
    printf("Enter the name of the  1st student  : ");
    fgets(Nikhil.name, 34, stdin);
    printf("The Student id of Sankalp is :%d\n", Sankalp.id);
    printf("The Student id of Nikhil  is :%d\n", Nikhil.id);
    printf("The Student name having id %d is :%s\n", Sankalp.id, Sankalp.name);
    return 0;
}