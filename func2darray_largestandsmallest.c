#include <stdio.h>
int LARGEST(int,int c,int [][c]);
int SMALLEST(int,int c,int [][c]);
int main()
{
int r,c,i,j;
printf("Enter the number of rows in the matrix: ");
scanf("%d",&r);
printf("Enter the number of columns in the matrix: ");
scanf("%d",&c);
int a[r][c];
printf("Enter the elements: \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
int largest=LARGEST(r,c,a);
int smallest=SMALLEST(r,c,a);
printf("Largest element in the matrix = %d\n",largest);
printf("Smallest element in the matrix = %d\n",smallest);
return 0;
}
int LARGEST(int r,int c,int a[][c])
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
return max;
}
int SMALLEST(int r,int c,int a[][c])
{
int min=a[0][0],i,j;
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
return min;
}

