#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,*ptr;
printf("Enter the number of elements in the array for malloc: ");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
if(ptr==NULL)
{
printf("Memory allocation failed\n");
}
else
{
printf("Memory allocation successfull\n");
}
free(ptr);
printf("Enter the number of elements in the array for calloc: ");
scanf("%d",&n);
ptr=(int*)calloc(n,sizeof(int));
if(ptr==NULL)
{
printf("Memory allocation failed\n");
}
else
{
printf("Memory allocation successfull\n");
}
free(ptr);
return 0;
}

