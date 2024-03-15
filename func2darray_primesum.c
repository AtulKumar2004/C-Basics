#include <stdio.h>
int PRIMESUM(int,int c,int[][c]);
int main()
{
int r,c,i,j;
printf("Enter the number of rows in the 2d matrix: ");
scanf("%d",&r);
printf("Enter the number of columns in the 2d matrix: ");
scanf("%d",&c);
int a[r][c];
printf("Enter the elements:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
int sumofprime=PRIMESUM(r,c,a);
printf("The sum of prime elements = %d\n",sumofprime);
return 0;
}
int PRIMESUM(int r,int c,int a[][c])
{
int i,j,k,ch=1,sum=0;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(a[i][j]>1)
{
for(k=2;k<a[i][j];k++)
{
if(a[i][j]%k==0)
{
ch=0;
break;
}
}
if(ch==1)
{
sum+=a[i][j];
}
ch=1;
}
}
}
return sum;
}
