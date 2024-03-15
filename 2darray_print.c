#include <stdio.h>
int main()
{
int nc,nd,i,j;
printf("Enter the number of cities: ");
scanf("%d",&nc);
printf("Enter the number of days: ");
scanf("%d",&nd);
int temp[nc][nd];
printf("Enter temperatures for 1st city then 2nd city upto %d cities for %d days:\n",nc,nd);
for(i=0;i<nc;i++)
{
for(j=0;j<nd;j++)
{
scanf("%d",&temp[i][j]);
}
}
printf("Displaying values: \n");
for(i=0;i<nc;i++)
{
for(j=0;j<nd;j++)
{
printf("City %d,Day %d = %d\n",i+1,j+1,temp[i][j]);
}
}
return 0;
}
