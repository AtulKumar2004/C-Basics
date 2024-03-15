#include <stdio.h>
int sumoftwomatrix(int,int c1,int [][c1],int [][c1],int [][c1]);
int main()
{
int r1,c1,r2,c2,i,j;
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
int a1[r1][c1];
int a2[r2][c2];
int sum[r1][c1];
printf("Enter the elements of first matrix: \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a1[i][j]);
}
}
printf("Enter the elements of second matrix: \n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&a2[i][j]);
}
}
sumoftwomatrix(r1,c1,a1,a2,sum);
printf("Result Matrix:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t",sum[i][j]);
}
printf("\n");
}
}
else
{
printf("Order of the two matrices are not same so matrices cannot be added\n");
}
return 0;
}
int sumoftwomatrix(int r1,int c1,int a1[][c1],int a2[][c1],int sum[][c1])
{
int i,j;
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
sum[i][j]=a1[i][j]+a2[i][j];
}
}
return 0;
}
