#include <stdio.h>
int sort_Array(int a[],int);
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
printf("Before sorting elements of the given array: \n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
} 
sort_Array(a,n);
printf("\nAfter sorting elements of the given array: \n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\n"); 
return 0;
}
int sort_Array(int a[],int n)
{
int i,j,temp;
for(i=0;i<n;i++)
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
return 0;
}

