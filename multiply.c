#include <stdio.h>
int main()
{
int a,b;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
int *p1=&a;
int *p2=&b;
int multiply=(*p1)*(*p2);
printf("%d\n",multiply);
return 0;
}
