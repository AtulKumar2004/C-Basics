#include <stdio.h>
#include <string.h>
int main()
{
int i,j,p=0,t=0;
char st[100];
printf("Enter a sentence: ");
gets(st);
int l=strlen(st);
for(i=0;i<l;i++)
{
if(st[i]=='@')
{
p=1;
}
if(st[i]=='.')
{
t=1;
}
}
if(p==1 && t==1)
{
printf("The mailid is valid\n");
}
else
{
printf("The mailid is invalid\n");
}
return 0;
}
