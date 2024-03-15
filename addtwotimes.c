#include <stdio.h>
int main()
{
int h1,m1,s1,h2,m2,s2,sh,sm,ss;
printf("Enter first time in hh mm ss: ");
scanf("%d%d%d",&h1,&m1,&s1);
printf("Enter second time in hh mm ss: ");
scanf("%d%d%d",&h2,&m2,&s2);
sh=h1+h2;
sm=m1+m2;
ss=s1+s2;
if(ss>=60)
{
ss-=60;
sm+=1;
}
if(sm>=60)
{
sm-=60;
sh+=1;
}
printf("Output time = %d:%d:%d\n",sh,sm,ss);
}

