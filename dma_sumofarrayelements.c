#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,n,*ptr,sum=0;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
printf("Enter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&ptr[i]);
sum+=ptr[i];
}
printf("The sum of the array elements = %d\n",sum);
free(ptr);
return 0;
}


