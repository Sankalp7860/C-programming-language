#include <stdio.h>    
#include<stdlib.h>
int main()    
{    
int a=0;
printf("Enter the number of elements in array: ");
scanf("%d",&a);
int *p = (int*) calloc(a,sizeof(int));
printf("Please Enter the array of size %d: ",a);
for (int i = 0; i < a; i++)
{
    scanf("%d",&p[i]);
}    
    
//Array fr will store frequencies of element       
int *fr = (int*) calloc(a,sizeof(int));
int visited = -1;
for(int i = 0; i < a; i++){    
    int count = 1;    
    for(int j = i+1; j < a; j++){    
        if(p[i] == p[j]){    
            count++;    
            //To avoid counting same element again    
            fr[j] = visited;    
        }    
    }    
    if(fr[i] != visited)    
        fr[i] = count;    
}    
    
//Displays the frequency of each element present in array    
printf("---------------------\n");    
printf(" Element | Frequency\n");    
printf("---------------------\n");    
for(int i = 0; i < a; i++){    
    if(fr[i] != visited){    
        printf("    %d", p[i]);    
        printf("    |  ");    
        printf("  %d\n", fr[i]);    
    }    
}    
printf("---------------------\n");    
return 0;    
}   