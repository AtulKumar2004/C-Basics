/*
#include <stdio.h>
int main()
{
int i=1,a,b,n,sum=0,sumfinal=0,temp;
printf("Enter the first two terms of lucas series: ");
scanf("%d%d",&a,&b);
printf("Enter the number of terms in lucas series: ");
scanf("%d",&n);
if(n==1)
{
printf("%d\n",a);
}
if(n==2)
{
printf("%d %d\n",a,b);
}
if(n>2)
{
printf("%d %d ",a,b);
sum=a+b;
while(i<=n-2)
{
temp=sumfinal;
sumfinal=sumfinal+sum;
printf("%d ",sumfinal);
if(i==1)
{
sum=b;
}
else
{
sum=temp;
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
int i,a,b,n,sum=0,sumfinal=0,temp;
printf("Enter the first two terms of lucas series: ");
scanf("%d%d",&a,&b);
printf("Enter the number of terms in lucas series: ");
scanf("%d",&n);
if(n==1)
{
printf("%d\n",a);
}
if(n==2)
{
printf("%d %d\n",a,b);
}
if(n>2)
{
printf("%d %d ",a,b);
sum=a+b;
for(i=1;i<=(n-2);i++)
{
temp=sumfinal;
sumfinal=sumfinal+sum;
printf("%d ",sumfinal);
if(i==1)
{
sum=b;
}
else
{
sum=temp;
}
}
printf("\n");
}
}
*/

#include <stdio.h>
int main()
{
int i=1,a,b,n,sum=0,sumfinal=0,temp;
printf("Enter the first two terms of lucas series: ");
scanf("%d%d",&a,&b);
printf("Enter the number of terms in lucas series: ");
scanf("%d",&n);
if(n==1)
{
printf("%d\n",a);
}
if(n==2)
{
printf("%d %d\n",a,b);
}
if(n>2)
{
printf("%d %d ",a,b);
sum=a+b;
do
{
temp=sumfinal;
sumfinal=sumfinal+sum;
printf("%d ",sumfinal);
if(i==1)
{
sum=b;
}
else
{
sum=temp;
}
i++;
}
while(i<=n-2);
printf("\n");
}
}

