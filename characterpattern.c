/*
#include <stdio.h>
int main()
{
int i,j,n;
printf("Enter the value of n: ");
scanf("%d",&n);
char ch='A',ch2=ch;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%c ",(char)ch);
ch--;
}
printf("\n");
ch2++;
ch=ch2;
}
}
*/


/*
#include <stdio.h>
int main()
{
int i=1,j,n;
printf("Enter the value of n: ");
scanf("%d",&n);
char ch='A',ch2=ch;
while(i<=n)
{
j=1;
while(j<=i)
{
printf("%c ",(char)ch);
ch--;
j++;
}
i++;
printf("\n");
ch2++;
ch=ch2;
}
}
*/

#include <stdio.h>
int main()
{
int i=1,j,n;
printf("Enter the value of n: ");
scanf("%d",&n);
char ch='A',ch2=ch;
do
{
j=1;
do{
printf("%c ",(char)ch);
ch--;
j++;
}
while(j<=i);
i++;
printf("\n");
ch2++;
ch=ch2;
}
while(i<=n);
}
