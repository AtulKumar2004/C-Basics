#include <stdio.h>
#include <string.h>
int main()
{
int i,j,k,l;
char st[100];
printf("Enter a string: ");
gets(st);
l=strlen(st);
for(i=0;st[i]==' ';i++){}
for(j=l-1;st[j]==' ';j--){}
for(k=0;k<=j;k++)
{
if(i<=j)
{
st[k]=st[i++];
}
else
{
st[k]='\0';
break;
}
}
i=0;
while(st[i]!='\0')
{
printf("%c",st[i]);
i++;
}
printf("\n");
return 0;
}
