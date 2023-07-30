#include<stdio.h>
#include<string.h>
int main()
{
    char S1[]="Old";
    char S2[]="book";
    char S3[54];
    //puts(strcat(S1,S2));
    printf("the lenght of S1 is :%lu\n ",strlen(S1));
    printf("the lenght of S2 is :%lu\n ",strlen(S2));
    //printf("the reverse of S1 is : ");
    //puts(strrev(S1));
    strcpy(S3,strcat(S1,S2));
    printf("the value of s3 is %s",S3);
   // puts(S3);
    printf("the value of strcmp of S1 and S2 is:%d",strcmp(S1,S2));
    return 0;
}