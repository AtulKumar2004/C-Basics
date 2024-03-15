/*
#include <stdio.h>
int main()
{
int a,b,i,gcd,lcm=0;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
for(i=1;i<=a && i<=b;i++)
{
if(a%i==0 && b%i==0)
{
gcd=i;
}
}
int max=(a>b)?a:b;
for(i=1;2<3;i++)
{
if(max%a==0 && max%b==0)
{
lcm=max;
break;
}
max++;
}
printf("The gcd of %d and %d = %d\n",a,b,gcd);
printf("The lcm of %d and %d = %d\n",a,b,lcm);
}
*/

/*
#include <stdio.h>
int main()
{
int a,b,i=1,gcd,lcm=0;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
while(i<=a && i<=b)
{
if(a%i==0 && b%i==0)
{
gcd=i;
}
i++;
}
int max=(a>b)?a:b;
while(2<3)
{
if(max%a==0 && max%b==0)
{
lcm=max;
break;
}
max++;
}
printf("The gcd of %d and %d = %d\n",a,b,gcd);
printf("The lcm of %d and %d = %d\n",a,b,lcm);
}
*/

#include <stdio.h>
int main()
{
int a,b,i=1,gcd,lcm=0;
printf("Enter two numbers: ");
scanf("%d%d",&a,&b);
do
{
if(a%i==0 && b%i==0)
{
gcd=i;
}
i++;
}
while(i<=a && i<=b);
int max=(a>b)?a:b;
do
{
if(max%a==0 && max%b==0)
{
lcm=max;
break;
}
max++;
}
while(2<3);
printf("The gcd of %d and %d = %d\n",a,b,gcd);
printf("The lcm of %d and %d = %d\n",a,b,lcm);
}
