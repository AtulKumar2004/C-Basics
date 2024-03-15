#include <stdio.h>
int sum_LargestandSmallest(int,int c,int [][c]);
int main()
{
int r,c,i,j;
printf("Enter the number of rows in the 2d array: ");
scanf("%d",&r);
printf("Enter the number of columns in the 2d array: ");
scanf("%d",&c);
int a[r][c];
printf("Enter the elements : \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
int sum=sum_LargestandSmallest(r,c,a);
printf("Sum of Largest and Smallest element in the 2d array = %d\n",sum);
return 0;
}
int sum_LargestandSmallest(int r,int c,int a[][c])
{
int max=a[0][0],i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(max<a[i][j])
{
max=a[i][j];
}
}
}
int min=a[0][0];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(min>a[i][j])
{
min=a[i][j];
}
}
}
return (max+min);
}
