#include <stdio.h>
void multiply(int [][3],int [][3],int [][3]);
int main()
{
int i,j;
int a[3][3];
int b[3][3];
int res[3][3];
printf("Enter the elements of first matrix: \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the elements of second matrix: \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("Entered matrix 1:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("Entered matrix  2:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}
multiply(a,b,res);
printf("Resultant matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",res[i][j]);
}
printf("\n");
}
return 0;
}
void multiply(int a[][3],int b[][3],int res[][3])
{
int i,j,k;
for(i=0;i<3;i++) 
{
for(j=0;j<3;j++) 
{
res[i][j] = 0;
}
}
for(i=0;i<3;i++) 
{
for(j=0;j<3;j++) 
{
for(k=0;k<3;k++) 
{
res[i][j] += a[i][k] * b[k][j];
}
}
}
}
