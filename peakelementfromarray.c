#include <stdio.h>
int main()
{
int n,i,c=0;
printf("Enter the number of elements of array: ");
scanf("%d",&n);
int a[n];
printf("Enter the %d elements: ",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n-1;i++)
{
if(a[i]>a[i-1] && a[i]>a[i+1])
{
printf("The peak element is = %d\n",a[i]);
c=1;
break;
}
}
if(c==0)
{
if(a[1]>a[n-1])
{
printf("The peak element is = %d\n",a[1]); 
}
else
{
printf("The peak element is = %d\n",a[n-1]);
}
}
} 
