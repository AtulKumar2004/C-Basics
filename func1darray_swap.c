#include <stdio.h>
int SWAP(int a[],int);
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
printf("Entered array:\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
SWAP(a,n);
printf("\nArray after swapping:\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\n");
return 0;
}
int SWAP(int a[],int n)
{
int i,temp;
temp=a[0];
a[0]=a[n-1];
a[n-1]=temp;
return 0;
}
