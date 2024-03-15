/*
#include <stdio.h>
int main()
{
int i,n,c=1;
printf("Enter a number: ");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if (n%i==0)
{
c=0;
break;
}
}
if(c==1)
{
printf("You have entered %d,%d is a prime number",n,n);
}
else
{
printf("You have entered %d,%d is not a prime number",n,n);
}
}
*/

/*
#include <stdio.h>
int main()
{
int i=2,n,c=1;
printf("Enter a number: ");
scanf("%d",&n);
while(i<n)
{
if (n%i==0)
{
c=0;
break;
}
i++;
}
if(c==1)
{
printf("You have entered %d,%d is a prime number\n",n,n);
}
else
{
printf("You have entered %d,%d is not a prime number\n",n,n);
}
}
*/

#include <stdio.h>
int main()
{
int i=2,n,c=1;
printf("Enter a number: ");
scanf("%d",&n);
do
{
if (n%i==0)
{
c=0;
break;
}
i++;
}
while(i<n);
if(c==1)
{
printf("You have entered %d,%d is a prime number\n",n,n);
}
else
{
printf("You have entered %d,%d is not a prime number\n",n,n);
}
}
