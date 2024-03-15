#include <stdio.h>
int main()
{
int a,b;
printf("Enter the value of a:\n");
scanf("%d",&a);
int *ptr=&a;
printf("Enter the new value of a:\n");
scanf("%d",&b);
printf("Before changing,the value of a:%d\n",*ptr);
a=b;
printf("After changing,the value of a:%d\n",*ptr);
return 0;
}
