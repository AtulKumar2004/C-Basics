#include <stdio.h>
int swap(int*,int*,int*);
int main()
{
int a,b,c;
printf("Enter the value of a,b,c:");
scanf("%d%d%d",&a,&b,&c);
printf("Before swapping the value of a,b,c:%d,%d,%d\n",a,b,c);
swap(&a,&b,&c);
printf("After swapping the value of a,b,c:%d,%d,%d\n",a,b,c);
return 0;
}
int swap(int *num1,int *num2,int *num3)
{
int temp1=*num1;
int temp2=*num2;
*num1=*num3;
*num2=temp1;
*num3=temp2;
return 0;
}
