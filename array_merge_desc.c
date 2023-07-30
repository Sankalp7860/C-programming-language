#include <stdio.h>
#include<stdlib.h>
void add_desc(int *p,int* q,int a){
int *r=(int *) calloc (a*2,sizeof(int));
int *k=(int *) calloc (a*2,sizeof(int));
int b=0;
for (int i = 0; i < 2*a; i++){
    if (i<a)
    r[i]=p[i];
    else
    r[i]=q[i-3];
}
int temp;
for (int i = 0; i < 2*a; i++)
{
    for (int j = i+1; j < 2*a; j++)
    {
     if (r[i]<r[j])
     {
        temp=r[j];
        r[j]=r[i];
        r[i]=temp;
     }
        
    }
    
}
printf("The array after merging and in descending order is: ");
for (int i = 0; i < 2*a; i++)
{
    printf("%d ",r[i]);
}

}
int main()
{
    int a=0;
    printf("Enter the number of elements in both array: ");
    scanf("%d",&a);
    int *p = (int*) calloc(a,sizeof(int));
    printf("Please Enter the first array of size %d: ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&p[i]);
    }
    int *q = (int*) calloc(a,sizeof(int));
    printf("Please Enter the second array of size %d: ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&q[i]);
    }
    add_desc(p,q,a);
    return 0;
}