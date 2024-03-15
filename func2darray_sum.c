#include <stdio.h>
int ELESUM(int,int c,int [][c]);
int main()
{
int r,c,i,j,s;
printf("Enter the number of rows in 2d array ");
scanf("%d",&r);
printf("Enter the number of columns in 2d array ");
scanf("%d",&c);
int a[r][c];
printf("Enter the elements in the array:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
s=ELESUM(r,c,a);
printf("Sum of the elements of the given array = %d\n",s);
return 0;
}
int ELESUM(int r,int c,int a[][c])
{
int sum=0,i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
sum+=a[i][j];
}
}
return sum;
}
