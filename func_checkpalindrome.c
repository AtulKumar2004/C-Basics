#include <stdio.h>
int check_Palindrome(int);
int main()
{
int n;
printf("Enter a number to test for palindrome: ");
scanf("%d",&n);
int check=check_Palindrome(n);
printf("Entered number = %d\n",n);
if(check==1)
{
printf("Number is palindrome.\n");
}
else
{
printf("Number is not palindrome.\n");
}
return 0;
}
int check_Palindrome(int n)
{
int d,rev=0,num=n;
while(n>0)
{
d=n%10;
rev=rev*10+d;
n=n/10;
}
if(num==rev)
{
return 1;
}
else
{
return 0;
}
}
