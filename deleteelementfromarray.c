#include <stdio.h>
int main()
{
int i,j,n,posofdel,indofdel;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
printf("Enter %d numbers: \n",n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the position where to delete: ");
scanf("%d",&posofdel);
indofdel=posofdel-1;
for(i=indofdel;i<n-1;i++)
{
a[i]=a[i+1];
}
printf("The new list is: ");
for(i=0;i<n-1;i++)
{
printf("%d ",a[i]);
}
printf("\n");
}
