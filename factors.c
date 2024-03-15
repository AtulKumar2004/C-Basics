/*
#include <stdio.h>
int main()
{
int i,n;
printf("Enter a number: ");
scanf("%d",&n);
printf("The factors are: ");
for(i=1;i<=n;i++)
{
if(n%i==0)
{
printf("%d ",i);
}
}
printf("\n");
}
*/

/*
#include <stdio.h>
int main()
{
int i=1,n;
printf("Enter a number: ");
scanf("%d",&n);
printf("The factors are: ");
while(i<=n)
{
if(n%i==0)
{
printf("%d ",i);
}
i++;
}
printf("\n");
}
*/


#include <stdio.h>
int main()
{
int i=1,n;
printf("Enter a number: ");
scanf("%d",&n);
printf("The factors are: ");
do
{
if(n%i==0)
{
printf("%d ",i);
}
i++;
}
while(i<=n);
printf("\n");
}
