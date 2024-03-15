/*
#include <stdio.h>
int main()
{
int n,i,j;
printf("Enter the value of n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(i==1 || i==n || j==1 || j==n)
{
printf("*");
}
else
{
printf(" ");
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
j=1;
while(j<=n)
{
if(i==1 || i==n || j==1 || j==n)
{
printf("*");
}
else
{
printf(" ");
}
j++;
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
j=1;
do
{
if(i==1 || i==n || j==1 || j==n)
{
printf("*");
}
else
{
printf(" ");
}
j++;
}
while(j<=n);
printf("\n");
i++;
}
while(i<=n);
}
