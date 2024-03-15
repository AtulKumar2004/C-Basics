#include <stdio.h>
int swap_Largestandsmallest(int,int c,int [][c]);
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
printf("Entered Array:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
swap_Largestandsmallest(r,c,a);
printf("Array after swapping:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
return 0;
}
int swap_Largestandsmallest(int r,int c,int a[][c])
{
int max=a[0][0],maxi,maxj,i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(max<a[i][j])
{
max=a[i][j];
maxi=i;
maxj=j;
}
}
}
int min=a[0][0],mini,minj;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(min>a[i][j])
{
min=a[i][j];
mini=i;
minj=j;
}
}
}
int temp=a[maxi][maxj];
a[maxi][maxj]=a[mini][minj];
a[mini][minj]=temp;
return 0;
}
