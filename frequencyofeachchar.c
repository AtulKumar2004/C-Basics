#include <stdio.h>
#include <string.h>
int main()
{
int i,j,k,l,br=0,c=0;
char st[100];
printf("Enter the string: ");
gets(st);
l=strlen(st);
for(i=0;i<l;i++)
{
if((st[i]>=65 && st[i]<=90) || (st[i]>=97 && st[i]<=122))
{
for(k=0;k<i;k++)
{
if(st[k]==st[i])
{
br=1;
break;
}
}
if(br==0)
{
for(j=i;j<l;j++)
{
if(st[i]==st[j])
{
c++;
}
}
printf("%c=%d\n",st[i],c);
}
c=0;
br=0;
}
}
return 0;
}
