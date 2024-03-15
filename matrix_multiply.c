#include <stdio.h>
int main()
{
int r1,c1,r2,c2,i,j,sum=0,m=0,ch=0;
printf("Enter the numbers of rows in first matrix: ");
scanf("%d",&r1);
printf("Enter the numbers of columns in first matrix: ");
scanf("%d",&c1);
printf("Enter the numbers in first matrix: \n");
int mat1[r1][c1];
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&mat1[i][j]);
}
}
printf("Enter the numbers of rows in second matrix: ");
scanf("%d",&r2);
printf("Enter the numbers of columns in second matrix: ");
scanf("%d",&c2);
printf("Enter the numbers in second matrix: \n");
int mat2[r2][c2];
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&mat2[i][j]);
}
}
int multiply[r1][c2];
if(c1==r2)
{
ch=1;
for(i=0;i<r1;i++)
{
for(j=0;j<r2;j++)
{
sum+=mat1[m][j]*mat2[j][i];
}
multiply[m][i]=sum;
sum=0;
if(i==c2-1)
{
m++;
i=-1;
if(m==r1)
break;
}
}
}
printf("Value of matrix 1:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t",mat1[i][j]);
}
printf("\n");
}
printf("Value of matrix 2:\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",mat2[i][j]);
}
printf("\n");
}
if(ch==1)
{
printf("After Multiplication resultant matrix is:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",multiply[i][j]);
}
printf("\n");
}
}
else
{
printf("The two matrices cannot be multiplied\n");
}
}
