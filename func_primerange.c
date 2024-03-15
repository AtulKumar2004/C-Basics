#include <stdio.h>
void prime_Range(int);
int main()
{
int n=100;
prime_Range(n);
return 0;
}
void prime_Range(int n)
{
int c=0,i,j;
printf("Prime numbers between 1 to %d:\n",n);
for(i=1;i<=n;i++)
{
for(j=2;j<i;j++)
{
if(i%j==0)
{
c++;
}
}
if(c==0)
{
printf("%d ",i);
}
c=0;
}
printf("\n");
}
