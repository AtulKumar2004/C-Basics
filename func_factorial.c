#include <stdio.h>
int factorial(int n)
{
int i,fact=1;
for(i=1;i<=n;i++)
{
fact*=i;
}
return fact;
}
int main()
{
int n,f;
printf("Enter a number: ");
scanf("%d",&n);
f=factorial(n);
printf("Factorial of %d = %d\n",n,f);
}

