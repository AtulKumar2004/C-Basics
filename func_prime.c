#include <stdio.h>
int prime(int n)
{
int i,ch=1;
for(i=2;i<n;i++)
{
if(n%i==0)
{
ch=0;
break;
}
}
return ch;
}
int main()
{
int n,ch;
printf("Enter an integer: ");
scanf("%d",&n);
ch=prime(n);
if(ch==1)
{
printf("%d is prime\n",n);
}
else
{
printf("%d is not prime\n",n);
}
return 0;
}
