// C program to find transpose of a matrix and allow user to specify dimension of matrix & multiply input matrix with it's transpose 
#include<stdio.h>
void main()
{
    int mat[100][100],trans[100][100],mul[100][100],column,row;
    int i,j;
    printf("Enter number of rows in matrix : ");
    scanf("%d",&row);
    printf("Enter number of column in matrix : ");
    scanf("%d",&column);
    printf("Enter matrix elements\n");
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++){
        scanf("%d",&mat[i][j]);
    }
}
printf("Matrix is \n");
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++){
        printf("%d\t",mat[i][j]);
    }
    printf("\n");
}

for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
       trans[j][i]=mat[i][j];
    }
}
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
       mul[i][j]=mat[i][j] * trans[i][j];
    }
}
printf("Transpose of matrix is\n");
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
        printf("%d\t",trans[i][j]);
    }
    printf("\n");
}
printf("Multiplication of matrix is\n");
for(i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
        printf("%d\t",mul[i][j]);
    }
    printf("\n");
}
}