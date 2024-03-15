#include <stdio.h>
int main()
{
int p,r1,p1;;
printf("Enter your amount in paisa: ");
scanf("%d",&p);
r1=p/100;
p1=p%100;
printf("Amount = %d rupees and %d paisa\n",r1,p1);
}

