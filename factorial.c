/*
#include <stdio.h>
int main()
{
int i,n,fact=1;
printf("Enter the value of n: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact*=i;
}
printf("The factorial of n = %d\n",fact);
}
*/

/*
#include <stdio.h>
int main()
{
int i=1,n,fact=1;
printf("Enter the value of n: ");
scanf("%d",&n);
while(i<=n)
{
fact*=i;
i++;
}
printf("The factorial of n = %d\n",fact);
}
*/

#include <stdio.h>
int main()
{
int i=1,n,fact=1;
printf("Enter the value of n: ");
scanf("%d",&n);
do
{
fact*=i;
i++;
}
while(i<=n);
printf("The factorial of n = %d\n",fact);
}

