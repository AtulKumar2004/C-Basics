/*
#include <stdio.h>
int main()
{
int i,n,sum=0;
printf("Enter a number: ");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
{
sum+=i;
}
}
if(sum==n)
{
printf("The given number is perfect\n");
}
else
{
printf("The given number is not perfect\n");
}
}
*/

/*
#include <stdio.h>
int main()
{
int i=1,n,sum=0;
printf("Enter a number: ");
scanf("%d",&n);
while(i<n)
{
if(n%i==0)
{
sum+=i;
}
i++;
}
if(sum==n)
{
printf("The given number is perfect\n");
}
else
{
printf("The given number is not perfect\n");
}
}
*/


#include <stdio.h>
int main()
{
int i=1,n,sum=0;
printf("Enter a number: ");
scanf("%d",&n);
do
{
if(n%i==0)
{
sum+=i;
}
i++;
}
while(i<n);
if(sum==n)
{
printf("The given number is perfect\n");
}
else
{
printf("The given number is not perfect\n");
}
}

