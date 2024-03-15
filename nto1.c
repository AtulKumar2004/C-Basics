/*
#include <stdio.h>
int main()
{
int n,i;
printf("Enter the value of n: ");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
printf("%d ",i);
}
printf("\n");
}
*/

/*
#include <stdio.h>
int main()
{
int i,n;
printf("Enter the value of n: ");
scanf("%d",&n);
i=n;
while(i>=1)
{
printf("%d ",i);
i--;
}
printf("\n");
}
*/

#include <stdio.h>
int main()
{
int i,n;
printf("Enter the value of n: ");
scanf("%d",&n);
i=n;
do
{
printf("%d ",i);
i--;
}
while(i>=1);
printf("\n");
}

