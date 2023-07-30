#include <stdio.h>
#include<stdlib.h>
void unique(int *p,int a){
int *q = (int*) calloc(a,sizeof(int));
int c=0,k=0;
for (int i = 0; i < a; i++)
    {
        c=0;
        for (int j = 0; j < a; j++)
        {
            if ( p[i]==p[j] && i!=j)
            {
                c=1;
            }
        }
        if (c==0)
        {
            q[k]=p[i];
            k++;
        }
        
    }
    
    printf("The array having unique elements is: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ",q[i]);
    }
}
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
    printf("\n");
    unique(p,a);
    
    
    return 0;
}