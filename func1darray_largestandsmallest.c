#include <stdio.h>
void largest_Array(int a[],int);
void smallest_Array(int a[],int);
int main()
{
int n,i;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
int a[n];
printf("Enter the elements of the array: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
largest_Array(a,n);
smallest_Array(a,n);
return 0;
}
void largest_Array(int a[],int n)
{
int largest=a[0],i;
for(i=0;i<n;i++)
{
if(largest<a[i])
{
largest=a[i];
}
}
printf("Largest element of the array is = %d\n",largest);
}
void smallest_Array(int a[],int n)
{
int smallest=a[0],i;
for(i=0;i<n;i++)
{
if(smallest>a[i])
{
smallest=a[i];
}
}
printf("Smallest element of the array is = %d\n",smallest);
}
