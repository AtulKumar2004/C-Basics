#include <stdio.h>
int main()
{
int n,ld,fd,sd;
printf("Enter a 3 digit number: ");
scanf("%d",&n);
ld=n%10;
fd=n/100;
sd=(n/10)%10;
printf("Reversed number = %d%d%d\n",ld,sd,fd);
}
