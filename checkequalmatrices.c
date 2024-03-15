#include <stdio.h>
int main()
{
int r1,c1,r2,c2,check=1,i,j;
printf("Enter the number of rows of first matrix: ");
scanf("%d",&r1);
printf("Enter the number of columns of first matrix: ");
scanf("%d",&c1);
printf("Enter the number of rows of second matrix: ");
scanf("%d",&r2);
printf("Enter the number of columns of second matrix: ");
scanf("%d",&c2);
if(r1==r2 && c1==c2)
{
int mat1[r1][c1];
int mat2[r2][c2];
printf("Enter the elements of first matrix:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&mat1[i][j]);
}
}
printf("Enter the elements of second matrix:\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&mat2[i][j]);
}
}
printf("The given matrix A is: \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t",mat1[i][j]);
}
printf("\n");
}
printf("The given matrix B is: \n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",mat2[i][j]);
}
printf("\n");
}
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
if(mat1[i][j]!=mat2[i][j])
{
check=0;
break;
}
}
if(check==0)
{
printf("Matrix A is not equal to matrix B\n");
break;
}
}
if(check==1)
{
printf("Matrix A is equal to matrix B\n");
}
}
else
{
printf("Matrix A is not equal to matrix B\n");
}
return 0;
}

