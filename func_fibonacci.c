#include <stdio.h>
int fibonacci(int n)
{
int count=0,a=0,b=1;
while (count < n-1) 
{
int next = a + b;
a = b;
b = next;
count++;
}
return a;
}
int main()
{
int n,fn;
printf("Fibonacci term serial number: ");
scanf("%d",&n);
fn=fibonacci(n);
printf("Fibonacci number = %d\n",fn);
return 0;
}
