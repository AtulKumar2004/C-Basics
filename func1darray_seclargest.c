#include <stdio.h>
int SECLARGEST(int a[],int);
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
int seclargest=SECLARGEST(a,n);
printf("Second largest element of the array is = %d\n",seclargest);
return 0;
}
int SECLARGEST(int a[],int n)
{
int i,j,temp;
for(i=0;i<2;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
return a[n-2];
}
