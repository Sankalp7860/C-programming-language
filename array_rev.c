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
    printf("\n");
    printf("The reversed array is:");
    for (int i = a-1; i > -1; i--)
    {
        printf("%d ",p[i]);
    }
    
    return 0;
}