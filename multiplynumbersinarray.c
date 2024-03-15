#include <stdio.h>
int main()
{
int i,j,n,product=1;
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
product=product*a[i];
}
printf("Product of the array elements = %d\n",product);
}
