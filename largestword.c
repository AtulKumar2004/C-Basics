#include <stdio.h>
#include <string.h>
int main()
{
int i,j=0,imax=0,l,c=0;
char st[100];
int n[100];
printf("Enter a sentence: ");
gets(st);
l=strlen(st);
for(i=0;i<=l;i++)
{
if(st[i]!=' ' && st[i]!='\0')
{
c++;
}
else
{
n[j++]=c;
c=0;
}
}
int cmax=n[0];
for(i=0;i<j;i++)
{
if(cmax<n[i])
{
cmax=n[i];
imax=i;
}
}
c=0;
for(i=0;i<=l;i++)
{
if(st[i]==' ' || st[i]=='\0')
{
c++;
if(imax==0)
{
c=imax;
i=-1;
}
if(c==imax)
{
for(j=i+1;st[j] !=' ' && st[j] != '\0';j++)
{
printf("%c",st[j]);
}
break;
}
}
}
return 0;
}
