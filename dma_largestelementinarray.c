#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,n,*ptr;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&ptr[i]); // ptr[i]=*(ptr+i)
}
int max=ptr[0];
for(i=0;i<n;i++)
{
if(max<ptr[i])
{
max=ptr[i];
}
}
printf("The largest element in the array is = %d\n",max);
free(ptr);
return 0;
}
