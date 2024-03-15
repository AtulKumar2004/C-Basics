/*
#include <stdio.h>
int main()
{
int n,ld,rev=0,orign;
printf("Enter a number: ");
scanf("%d",&n);
orign=n;
while(n>0)
{
ld=n%10;
rev=rev*10+ld;
n=n/10;
}
if(orign==rev)
{
printf("%d is a palindrome number\n",orign);
}
else{
printf("%d is not a palindrome number\n",orign);
}
}
*/

/*
#include <stdio.h>
int main()
{
int i,n,ld,rev=0;
printf("Enter a number: ");
scanf("%d",&n);
for(i=n;i>0;i/=10)
{
ld=i%10;
rev=rev*10+ld;
}
if(n==rev)
{
printf("%d is a palindrome number\n",n);
}
else{
printf("%d is not a palindrome number\n",n);
}
}
*/

#include <stdio.h>
int main()
{
int n,ld,rev=0,orign;
printf("Enter a number: ");
scanf("%d",&n);
orign=n;
do
{
ld=n%10;
rev=rev*10+ld;
n=n/10;
}
while(n>0);
if(orign==rev)
{
printf("%d is a palindrome number\n",orign);
}
else
{
printf("%d is not a palindrome number\n",orign);
}
}
