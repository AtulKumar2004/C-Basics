#include <stdio.h>
int main()
{
int r,c,check=1,i,j;
printf("Enter the number of rows in 2d array: ");
scanf("%d",&r);
printf("Enter the number of columns in 2d array: ");
scanf("%d",&c);
printf("Enter the elements in the 2d array: \n");
int arr[r][c];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&arr[i][j]);
}
}
if(r==c)
{
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(arr[i][i]!=1 || (i!=j && arr[i][j]!=0))
{
check=0;
break;
}
}
if(check==0)
{
printf("The given matrix is not an identity matrix!\n");
break;
}
}
if(check==1)
{
printf("The given matrix is an identity matrix!\n");
}
}
else
{
printf("The given matrix is not an identity matrix as it is not a square matrix!\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",arr[i][j]);
}
printf("\n");
}
return 0;
}
