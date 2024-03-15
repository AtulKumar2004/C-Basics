#include <stdio.h>
int decimal_binary(int n)
{
if (n==0)
{
return 0;
}
else
{
return ((n%2)+10*decimal_binary(n/2));
}
}
int main()
{
int n;
printf("Enter a decimal number\n");
scanf("%d",&n);
printf("Decimal %d = Binary %d\n",n,decimal_binary(n));
return 0;
}
