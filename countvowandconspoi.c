#include <stdio.h>
int main()
{
int i,j,n;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
int a[n];
printf("Enter the elements: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int *p=a;
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
if(*(p+j)>*(p+j+1))
{
int temp=*(p+j);
*(p+j)=*(p+j+1);
*(p+j+1)=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\n");
return 0;
}
