#include <stdio.h>
int main()
{
int ts,h,m1,m2,s;
printf("Enter the time in seconds: ");
scanf("%d",&ts);
h=ts/3600;
m1=ts%3600;
m2=m1/60;
s=ts%60;
printf("%d second = %d hours, %d minutes and %d seconds\n",ts,h,m2,s);
}
