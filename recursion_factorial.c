#include <stdio.h>
int factorial(int);
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
int fact=factorial(n);
printf("The factorial of %d is %d\n",n,fact);
return 0;
}
int factorial(int n)
{
if(n==1)
{
return 1;
}
int fnm1=factorial(n-1);
int fn=n*fnm1;
return fn;
}
