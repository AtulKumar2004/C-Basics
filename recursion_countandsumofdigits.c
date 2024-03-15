#include <stdio.h>
int countdigits(int,int);
int sumofdigits(int,int);
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
int count=countdigits(n,1);
int sum=sumofdigits(n,0);
printf("Total number of digits = %d\n",count);
printf("Total sum of digits = %d\n",sum);
return 0;
}
int countdigits(int n,int c)
{
if(n==0)
{
return 0;
}
int countprev=countdigits(n/10,1);
c=c+countprev;
return c;
}
int sumofdigits(int n,int s)
{
if(n==0)
{
return s;
}
int snby10=sumofdigits(n/10,n%10);
s=s+snby10;
return s;
}
