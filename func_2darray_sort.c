#include <stdio.h>
void SORTELE(int,int c,int [][c]);
int main()
{
int i,j,r,c;
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
printf("Entered matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
SORTELE(r,c,a);
printf("Matrix after sorting:\n");
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
void SORTELE(int r,int c,int a[][c])
{
int i,j,temp;
for (i=0;i<r*c-1;++i) 
{
for (j=0;j<r*c-1-i;++j) 
{
if (a[j/c][j%c]>a[(j+1)/c][(j+1)%c])
{
temp=a[(j+1)/c][(j+1)%c];
a[(j+1)/c][(j+1)%c]=a[j/c][j%c];
a[j/c][j%c]=temp;
}
}
}
}
