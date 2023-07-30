#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void permutation(int n,int * arr ){
for (int i =n-1; i > 0; i--)
{
    srand(time(NULL));
   int j=rand() % (i+1);
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
}
int main()
{
int n;
printf("Enter the size of the array:");
scanf("%d",&n);
int *arr=(int *) calloc (n,sizeof(int));
printf("Please Enter the elements of array: ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
permutation(n,arr);
for (int i = 0; i < n; i++)
{
printf("%d ",arr[i]);
}

    return 0;
}