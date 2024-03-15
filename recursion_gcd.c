#include <stdio.h>
int gcd(int,int,int,int);
int main()
{
int a,b;
printf("Enter two positive numbers whose gcd is to be found:");
scanf("%d%d",&a,&b);
int hcf=gcd(a,b,a,b);
printf("The gcd of %d and %d is %d\n",a,b,hcf);
return 0;
}
int gcd(int a,int b,int a1,int b1)
{
if(a1>b1)
{
if(a1%a==0 && b1%a==0)
{
return a;
}
gcd(a-1,b,a1,b1);
}
else if(a1<b1)
{
if(a1%b==0 && b1%b==0)
{
return b;
}
gcd(a,b-1,a1,b1);
}
else
{
return a;
}
}
