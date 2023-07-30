#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n1;
    printf("Please Enter the max length of the string:");
    scanf("%d",&n1);
    getchar();
    char* arr1=(char *)calloc(n1+1,sizeof(char));
    printf("Please Enter the string:");
    fgets(arr1,n1+1,stdin);
    int a=strlen(arr1)-1;
    int s=0;
for(int k=0;k<a;k++){
    if (arr1[k]=='.'){
        int period=k;
        for (int i = period-1; i >=s; i--)
        {
            if (arr1[i]==' ')
            {
                for (int j = i+1; j < period; j++)
                {
                    printf("%c",arr1[j]);
                }
                printf(" ");

            period=i;
            }  
        } 
        for (int i = s; i < period; i++)
        {
            printf("%c",arr1[i]);
        }
        printf(".");
        printf(" ");
    s=k+1;
    }
}
    return 0;
}