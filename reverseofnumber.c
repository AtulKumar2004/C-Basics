/*
#include <stdio.h>
int main()
{
int ld,n;
printf("Enter the number: ");
scanf("%d",&n);
printf("The reverse of %d = ",n);
while(n>0)
{
ld=n%10;
printf("%d",ld);
n=n/10;
}
printf("\n");
}
*/

/*
#include <stdio.h>
int main()
{
int i,ld,n;
printf("Enter the number: ");
scanf("%d",&n);
printf("The reverse of %d = ",n);
for(i=n;i>0;i=i/10)
{
ld=i%10;
printf("%d",ld);
}
printf("\n");
}
*/


#include <stdio.h>
int main()
{
int ld,n;
printf("Enter the number: ");
scanf("%d",&n);
printf("The reverse of %d = ",n);
do
{
ld=n%10;
printf("%d",ld);
n=n/10;
}
while(n>0);
printf("\n");
}

