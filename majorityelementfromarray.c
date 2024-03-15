#include <stdio.h>
int main()
{
int i,j,n,c;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
printf("Enter %d numbers: \n",n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
c=0;
for(j=i;j<n;j++)
{
if(a[i]==a[j])
{
c++;
}
}
if(c>n/2)
{
printf("%d ",a[i]);
}
}
printf("\n");
}
