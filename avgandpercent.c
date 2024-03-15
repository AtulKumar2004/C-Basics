#include  <stdio.h>
int main()
{
int a,b,c,d,e;
float avg=0.0f,percent=0.0f;
printf("Enter the marks of 5 subjects: ");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
avg=(a+b+c+d+e)/5.0f;
percent=((a+b+c+d+e)/(200*5.0f))*100;
printf("Average marks of 5 subjects = %f\n",avg);
printf("Percentage of 5 subjects = %f\n",percent);
}

