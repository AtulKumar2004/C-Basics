#include <stdio.h>
int count_Zeroes(int);
int main()
{
int n;
printf("Enter an integer: \n");
scanf("%d",&n);
int count=count_Zeroes(n);
printf("No. of zeroes = %d\n",count);
return 0;
}
int count_Zeroes(int n)
{
int count=0,d;
while(n>0)
{
d=n%10;
if(d==0)
{
count++;
}
n=n/10;
}
return count;
}

