/*
#include <stdio.h>
int main()
{
int n,i,j;
printf("Enter the value of n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==0)
{
for(j=i;j>=1;j--)
{
printf("%d ",j);
}
}
else
{
for(j=1;j<=i;j++)
{
printf("%d ",j);
}
}
printf("\n");
}
}
*/

/*
#include <stdio.h>
int main()
{
int n,i=1,j;
printf("Enter the value of n: ");
scanf("%d",&n);
while(i<=n)
{
if(i%2==0)
{
j=i;
while(j>=1)
{
printf("%d ",j);
j--;
}
}
else
{
j=1;
while(j<=i)
{
printf("%d ",j);
j++;
}
}
printf("\n");
i++;
}
}
*/

#include <stdio.h>
int main()
{
int n,i=1,j;
printf("Enter the value of n: ");
scanf("%d",&n);
do
{
if(i%2==0)
{
j=i;
do
{
printf("%d ",j);
j--;
}
while(j>=1);
}
else
{
j=1;
do
{
printf("%d ",j);
j++;
}
while(j<=i);
}
printf("\n");
i++;
}
while(i<=n);
}
