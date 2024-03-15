#include <stdio.h>
#include <string.h>
int main()
{
int i,l,j=0,c=0;
char st[100];
char selectedwor[100];
char currwor[100];
printf("Enter a string: ");
gets(st);
l=strlen(st);
for(i=0;i<=l;i++)
{
j=0;
if(st[i]!=' ' && st[i]!='\0')
{
selectedwor[j++]=st[i];
}
else
{
for(j=i+1;j<=l;j++)
{
k=0;
if(st[j]!=' ' && st[j]!='\0')
{
currwor[k++]=st[j];
}
else
{
if(strlen(selectedwor)==strlen(currwor))
{
p=0;
for(m=0;m<strlen(selectedwor);m++)
{
if(selectedwor[m]!=currwor[m])
{
p=1;
break;
}
}
if(p==0)
{
m=j;
while(st[m]!=' ')
{
st[m]=' ';
m--;
}
}
}
}
}

