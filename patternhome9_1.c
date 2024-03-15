/*
#include <stdio.h>
int main()
{
int i,j,n,change1,change2=0;
printf("Enter the value of n: ");
scanf("%d",&n);
change1=n;
for(i=1;i<=n;i++)
{
for(j=1;j<=change1;j++)
{
printf(j>=change1-change2 && j<=change1?"*":" ");
}
change1++;
change2+=2;
printf("\n");
}
}
*/

/*
#include <stdio.h>
int main()
{
int i=1,j,n,change1,change2=0;
printf("Enter the value of n: ");
scanf("%d",&n);
change1=n;
while(i<=n)
{
j=1;
while(j<=change1)
{
printf(j>=change1-change2 && j<=change1?"*":" ");
j++;
}
i++;
change1++;
change2+=2;
printf("\n");
}
}
*/

#include <stdio.h>
int main()
{
int i=1,j,n,change1,change2=0;
printf("Enter the value of n: ");
scanf("%d",&n);
change1=n;
do
{
j=1;
do
{
printf(j>=change1-change2 && j<=change1?"*":" ");
j++;
}
while(j<=change1);
i++;
change1++;
change2+=2;
printf("\n");
}
while(i<=n);
}

