#include <stdio.h>
int SUMDIAGONAL(int,int c,int a[][c]);
int main()
{
int r,c,i,j;
printf("Enter the number of rows of the given matrix: ");
scanf("%d",&r);
printf("Enter the number of columns of the given matrix: ");
scanf("%d",&c);
if(r==c)
{
int a[r][c];
printf("Enter the elements: \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
int sum=SUMDIAGONAL(r,c,a);
printf("Sum of the main diagonal = %d\n",sum);
}
else
{
printf("The entered order is not of a square matrix\n");
}
return 0;
}
int SUMDIAGONAL(int r,int c,int a[][c])
{
int sum=0,i;
for(i=0;i<r;i++)
{
sum+=a[i][i];
}
return sum;
}
