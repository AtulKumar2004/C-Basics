#include <stdio.h>
int main()
{
int r,c,i,j,nodd=0,neven=0;
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
printf("The given matrix is: \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",arr[i][j]);
}
printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(arr[i][j]%2==0)
{
neven++;
}
else
{
nodd++;
}
}
}
printf("The frequency of occurence of even number = %d\n",neven);
printf("The frequency of occurence of odd number = %d\n",nodd);
return 0;
}
