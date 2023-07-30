#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void helper(int m,char * buffer,char * type){
    char * _1[]={"","One ","Two ","Three ","Four ","Five ","Six ","Seven ","Eight ",
    "Nine ","Ten ","Eleven ","Twelve ","Thirteen ","Fourteen ","Fifteen ","Sixteen ",
    "Seventeen","Eighteen ","Nineteen "};
    char * _10[]={"","","Twenty ","Thirty ","Fourty ","Fifty ","Sixty ","Seventy ","Eighty ",
    "Ninety "};
    if (m<20){
        strcat(buffer,_1[m]);
    }
    else{
        strcat(buffer,_10[m/10]);
        strcat(buffer,_1[m%10]);
    }
    if (m!=0)
    {
        strcat(buffer,type);
    }
}
char * towards(int n){
int m;
char buffer[1000]="";
m=n/10000000;
helper(m,buffer,"Crore ");
m=(n%10000000)/100000;
helper(m,buffer,"Lakh ");
m=(n%100000)/1000;
helper(m,buffer,"Thousand ");
m=(n%1000)/100;
helper(m,buffer,"Hundred ");
m=n%100;
helper(m,buffer,"");
if (n==0){
    strcpy(buffer,"Zero ");
}
int length=strlen(buffer);
buffer[length-1]='\0';
char * words=(char *)calloc(length,sizeof(char));
strcpy(words,buffer);
return words;
}
int main(){
int n;
printf("Please Enter the number: ");
scanf("%d",&n);
char * words=towards(n);
puts(words);
return 0;
}