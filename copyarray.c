#include <stdio.h>
int copyarray(int [],int [],int);
int main()
{
int i,n;
printf("Enter the number of elements in the 1d array: ");
scanf("%d",&n);
int a[n];
int b[n];
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
copyarray(a,b,n);
printf("Elements of the copied array:\n");
for(i=0;i<n;i++)
{
printf("%d ",b[i]);
}
printf("\n");
return 0;
}
int copyarray(int a[],int b[],int n)
{
if(n==0)
{
return 0;
}
b[n-1]=a[n-1];
copyarray(a,b,n-1);
}
