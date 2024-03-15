/*
#include <stdio.h>
#include <math.h> 
int main()
{
int num,orignum1,orignum2,ld,c=0;
double power,sum=0.0;
printf("Enter a number: ");
scanf("%d",&num);
orignum1=num;
orignum2=num;
while(num>0)
{
c++;
num=num/10;
}
while(orignum1>0)
{
ld=orignum1%10;
power=pow(ld,c);
sum=sum+power;
orignum1=orignum1/10;
}
if(orignum2==sum)
{
printf("%d is a armstrong number\n",orignum2);
}
else
{
printf("%d is not a armstrong number\n",orignum2);
}
}
*/

/*
#include <stdio.h>
#include <math.h> 
int main()
{
int i,num,ld,c=0;
double power,sum=0.0;
printf("Enter a number: ");
scanf("%d",&num);
for(i=num;i>0;i/=10)
{
c++;
}
for(i=num;i>0;i=i/10)
{
ld=i%10;
power=pow(ld,c);
sum=sum+power;
}
if(num==sum)
{
printf("%d is a armstrong number\n",num);
}
else
{
printf("%d is not a armstrong number\n",num);
}
}
*/


#include <stdio.h>
#include <math.h> 
int main()
{
int num,orignum1,orignum2,ld,c=0;
double power,sum=0.0;
printf("Enter a number: ");
scanf("%d",&num);
orignum1=num;
orignum2=num;
do
{
c++;
num=num/10;
}
while(num>0);
do
{
ld=orignum1%10;
power=pow(ld,c);
sum=sum+power;
orignum1=orignum1/10;
}
while(orignum1>0);
if(orignum2==sum)
{
printf("%d is a armstrong number\n",orignum2);
}
else
{
printf("%d is not a armstrong number\n",orignum2);
}
}

