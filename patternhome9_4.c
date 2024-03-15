/*
#include <stdio.h>
int main()
{
int n,i,j;
printf("Enter the vaue of n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
// spaces
for(j=1;j<=i-1;j++)
{
printf(" ");
}
// stars
for(j=1;j<=(n-i)*2+1;j++)
{
printf("*");
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
printf("Enter the vaue of n: ");
scanf("%d",&n);
while(i<=n)
{
// spaces
j=1;
while(j<=i-1)
{
printf(" ");
j++;
}
// stars
j=1;
while(j<=(n-i)*2+1)
{
printf("*");
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
printf("Enter the vaue of n: ");
scanf("%d",&n);
do
{
// spaces
j=1;
do
{
printf(" ");
j++;
}
while(j<=i-1);
// stars
j=1;
do
{
printf("*");
j++;
}
while(j<=(n-i)*2+1);
printf("\n");
i++;
}
while(i<=n);
}
