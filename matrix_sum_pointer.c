#include <stdio.h>
#include<stdlib.h>
int **Create_matrix(int a,int b){
    int **matrix= (int**) calloc(a,sizeof(int*));
    for (int i = 0; i < a; i++)
    {
        matrix[i]=(int*) calloc(b,sizeof(int));
    }
    return matrix;
}
void scan_matrix(int **p,int a,int b){
for (int i = 0; i < a; i++)
{
    for (int j = 0; j < b; j++)
    {
        scanf("%d",&p[i][j]);
    }
    
}
}
void prints_matrix(int **p,int a,int b){
    for (int i = 0; i < a; i++)
{
    for (int j = 0; j < b; j++)
    {
        printf("%d ",p[i][j]);
    }
    printf("\n");
}
}
int **add(int a,int b, int **p,int **q){
    int **r=Create_matrix(a,b);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            r[i][j]=p[i][j]+q[i][j];
        }
        
    }
    return r;
}

int main()
{
int a,b;
printf("Enter the size of the matrices: ");
scanf("%dX%d",&a,&b);
int **p=Create_matrix(a,b);
int **q=Create_matrix(a,b);
scan_matrix(p,a,b);
scan_matrix(q,a,b);
int **r=add(a,b,p,q);
prints_matrix(r,a,b);
free(p);
p=NULL;
free(q);
q=NULL;
return 0;
}