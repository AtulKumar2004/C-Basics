/*
#include <stdio.h>
int main()
{
int i=1,n,sumprev=1,sum=0,temp;
printf("Enter the vaue of n: ");
scanf("%d",&n);
if (n==1)
{
printf("0\n");
}
else if(n==2)
{
printf("0 1 \n");
}
else
{
printf("0 1 ");
while(i<=(n-2))
{
temp=sum;
sum=sum+sumprev;
printf("%d ",sum);
if(sum>=3)
{
sumprev=temp;
}
i++;
}
printf("\n");
}
}
*/

/*
#include <stdio.h>
int main()
{
int i,n,sumprev=1,sum=0,temp;
printf("Enter the vaue of n: ");
scanf("%d",&n);
if (n==1)
{
printf("0\n");
}
else if(n==2)
{
printf("0 1 \n");
}
else
{
printf("0 1 ");
for(i=1;i<=n-2;i++)
{
temp=sum;
sum=sum+sumprev;
printf("%d ",sum);
if(sum>=3)
{
sumprev=temp;
}
}
printf("\n");
}
}
*/

#include <stdio.h>
int main()
{
int i=1,n,sumprev=1,sum=0,temp;
printf("Enter the vaue of n: ");
scanf("%d",&n);
if (n==1)
{
printf("0\n");
}
else if(n==2)
{
printf("0 1 \n");
}
else
{
printf("0 1 ");
do
{
temp=sum;
sum=sum+sumprev;
printf("%d ",sum);
if(sum>=3)
{
sumprev=temp;
}
i++;
}
while(i<=(n-2));
printf("\n");
}
}
