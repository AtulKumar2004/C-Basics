#include <stdio.h>
int main()
{
int bp,mp,dis;
float sp,profit,loss;
printf("Enter the buying price: ");
scanf("%d",&bp);
printf("Enter the marked price: ");
scanf("%d",&mp);
printf("Enter the discount: ");
scanf("%d",&dis);
sp=mp-(dis/100.0f)*mp;
if((sp-bp)>0)
{
profit=((sp-bp)/bp)*100.0f;
printf("Seller made a profit of %f percent\n",profit);
}
else if((sp-bp)==0)
{
printf("No profit or loss incurred\n");
}
else
{
loss=((bp-sp)/bp)*100.0f;
printf("Seller made a loss of %f percent\n",loss);
}
}
