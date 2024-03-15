#include <stdio.h>
int main()
{
int n,i,pos,ins,temp,index;
printf("Enter the number of elements in an array: \n");
scanf("%d",&n);
int a[n];
printf("Enter %d numbers: \n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
a[n+1];
printf("Enter the position where you want to insert the element: ");
scanf("%d",&pos);
printf("Enter the number you want to insert in the position: ");
scanf("%d",&ins);
index=pos-1;
for(i=0;i<n+1;i++)
{
if(i==index)
{
temp=a[i];
a[i]=ins;
}
else if(i>index)
{
if(i==index+1)
{
temp2=a[i];
a[i]=temp;
}
else
{
a[i]=temp2;
}
}
}
for(i=0;i<n+1;i++)
{
printf("%d ",a[i]);
}
printf("\n");
}
