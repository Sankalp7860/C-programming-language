#include<stdio.h>
#include<stdlib.h>
int max_sum(int n, int * arr){
int current_sum=0,best_sum=0;
for(int j=0;j<n;j++){
        current_sum=0;
    for(int i=0;i<n;i++){
        current_sum+=arr[i];
        if(current_sum<0){
            current_sum-=arr[i];
            current_sum=0;
        }
        if(current_sum>best_sum){
            best_sum=current_sum;
        }
     }
        int temp=arr[n];
    for(int k=0;k<n;k++){
        arr[n-k]=arr[n-k-1];
    }
    arr[0]=temp;
}
return best_sum;
}
int main(){
int n;
printf("Enter the size of array:");
scanf("%d",&n);
int *arr=(int *) calloc (n,sizeof(int));
printf("Please Enter the elements of array: ");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int a=max_sum(n,arr);
printf("The sum of maximum contiguous subarray is %d",a);
return 0;
}
