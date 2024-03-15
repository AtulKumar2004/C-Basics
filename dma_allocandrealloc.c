#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,n,*ptr;

// calloc
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
int oldsize=n;
ptr=(int*)calloc(n,sizeof(int));
printf("Memory successfully allocated using calloc\nEnter the elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&ptr[i]);
}
printf("Printing the array: \n");
for(i=0;i<n;i++)
{
printf("%d ",ptr[i]);
}

// realloc
printf("\nEnter the new size of the array: ");
scanf("%d",&n);
ptr=(int*)realloc(ptr,n*sizeof(int));
printf("Memory successfully allocated using realloc\nEnter the new elements:\n");
for(i=oldsize;i<n;i++)
{
scanf("%d",&ptr[i]);
}
printf("Printing the new array:\n");;
for(i=0;i<n;i++)
{
printf("%d ",ptr[i]);
}
printf("\n");
free(ptr);
return 0;
}

