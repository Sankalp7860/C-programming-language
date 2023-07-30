#include <stdio.h>
void printstr(char str[]){
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
  printf("\n");  
}
int main()
{
    //char str[]={'b','o','o','k','\0'};
    //char str[5]="book";
    char str[34];
    fgets(str,34,stdin);
    printf("Using Custom function printstr\n");
    printstr(str);
    printf("Using printf %s\n",str);
    printf("Using puts: \n");
    puts(str);
    return 0;
}





/*
#include <stdio.h>
#define MAX 15
int main()
{
    char buf[MAX];
    fgets(buf, MAX, stdin);
    printf("string is: %s\n", buf);
  
    return 0;
}


*/