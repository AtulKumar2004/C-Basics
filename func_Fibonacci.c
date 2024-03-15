#include <stdio.h>
int check_Fibonacci(int);
int main()
{
int n;
printf("Enter the number to test whether it is in Fibonacci sequence or not: ");
scanf("%d",&n);
int check=check_Fibonacci(n);
if(check==1)
{
printf("Number is in Fibonacci sequence: Yes\n");
}
else
{
printf("Number is in Fibonacci sequence: No\n");
}
return 0;
}
int check_Fibonacci(int n)
{
int a = 0, b = 1;  
int count = 0;
while(2<3) 
{
if(a==n)
{
return 1;
}
if(a>n)
{
return 0;
}
int next = a + b;
a = b;
b = next;
}
}
