#include <stdio.h>
int sumupto1digit(int,int);
int main()
{
int n,sum=0;
printf("Enter a number: ");
scanf("%d",&n);
int sum1dig=sumupto1digit(n,sum);
printf("Sum of digits (upto single digit) of %d = %d\n",n,sum1dig);
return 0;
}
int sumupto1digit(int n,int sum)
{
if(n>0)
{
sum=sum+(n%10);
return sumupto1digit(n/10,sum);
}
else if(n==0 && sum>9)
{
n=sum;

sum=0;
return sumupto1digit(n,sum);
}
else if(n==0 && sum<=9)
{
return sum;
}
}
