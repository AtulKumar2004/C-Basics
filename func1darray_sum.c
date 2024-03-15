#include <stdio.h>
int sum_Array(int a[],int);
int main()
{
int n,s,i;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
int a[n];
printf("Enter the elements of the array: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
s=sum_Array(a,n);
printf("Sum of the elements of the given array = %d\n",s);
return 0;
}
int sum_Array(int a[],int n)
{
int i,sum=0;
for(i=0;i<n;i++)
{
sum+=a[i];
}
return sum;
}

