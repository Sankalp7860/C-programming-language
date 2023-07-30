#include <stdio.h>
void row_sum(int a,int b,int matrix1[a][b]){
    printf("The sum of the rows of the matrix is:\n");
for (int i = 1; i <= a; i++)
{
    int sum=0;
    for (int j = 1; j <= b; j++)
    {
        sum+=matrix1[i][j];
    }
    printf("%d\n",sum);
}
}
void column_sum(int a,int b,int matrix1[a][b]){
printf("The sum of the column of the matrix is:\n");
for (int i = 1; i <= a; i++)
{
    int sum=0;
    for (int j = 1; j <= b; j++)
    {
        sum+=matrix1[j][i];
    }
    printf("%d\t",sum);
}
}
int main()
{
   int a,b;
printf("Enter the size of the matrices: ");
scanf("%dX%d",&a,&b);
int matrix1[a][b];
printf("Enter the first matrix of size %dX%d:\n",a,b);
for (int i = 1; i <= a; i++)
{
    for (int j = 1; j <= b; j++)
    {
        printf("Enter Element [%d,%d]: ",i,j);
        scanf("%d",&matrix1[i][j]);
    }
}
printf("Your Matrix is:\n");
for (int i = 1; i <= a; i++)
{
    for (int j = 1; j <= b; j++)
    {
        printf("%d\t",matrix1[i][j]);
    }
    printf("\n");
}
row_sum(a,b,matrix1);
column_sum(a,b,matrix1);
    return 0;
}