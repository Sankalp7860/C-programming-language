#include <stdio.h>
int main()
{
int marks[2][4]={   {1,2,3,4},
                    {4,3,2,1}   };
for ( int i = 0; i < 2; i++)
{
    for (int j = 0; j < 4; j++)
    {
        printf("%d",marks[i][j]);
    }
    printf("\n");
}
return 0;

}