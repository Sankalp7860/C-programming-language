#include <stdio.h>
void add(int a,int b,int matrix1[a][b],int matrix2[a][b]){
    int matrix3[a][b];
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
        }
        
    }
    printf("The Matrix of size %dX%d after adding two matrices is:\n",a,b);
for (int i = 1; i <= a; i++)
{
    for (int j = 1; j <= b; j++)
    {
        printf("%d\t",matrix3[i][j]);
    }
    printf("\n");
}
    
}
int main()
{
int a,b;
printf("Enter the size of the matrices: ");
scanf("%dX%d",&a,&b);
int matrix1[a][b];
printf("Enter the first matrix of size %dX%d\n",a,b);
for (int i = 1; i <= a; i++)
{
    for (int j = 1; j <= b; j++)
    {
        printf("Enter Element [%d,%d]: ",i,j);
        scanf("%d",&matrix1[i][j]);
    }
}
printf("Your first Matrix is:\n");
for (int i = 1; i <= a; i++)
{
    for (int j = 1; j <= b; j++)
    {
        printf("%d\t",matrix1[i][j]);
    }
    printf("\n");
}
int matrix2[a][b];
printf("Enter the second matrix of size %dX%d\n",a,b);
for (int i = 1; i <= a; i++)
{
    for (int j = 1; j <= b; j++)
    {
        printf("Enter Element [%d,%d]: ",i,j);
        scanf("%d",&matrix2[i][j]);
    }
}
printf("Your second Matrix is:\n");
for (int i = 1; i <= a; i++)
{
    for (int j = 1; j <= b; j++)
    {
        printf("%d\t",matrix2[i][j]);
    }
    printf("\n");
}
add(a,b,matrix1,matrix2);
return 0;
}