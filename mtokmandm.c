#include <stdio.h>
int main()
{
int d,km,m;
printf("Enter the distance in meters: ");
scanf("%d",&d);
km=d/1000;
m=d%1000;
printf("%d meter = %d km and %d m\n",d,km,m);
}
