#include <stdio.h>
#include <string.h>
int main()
{
int i,l;
char st[100],ch;
printf("Enter a string: ");
gets(st);
printf("Enter the character you want to replace: ");
scanf("%c",&ch);
l=strlen(st);
for(i=0;i<l;i++)
{
if(st[i]==ch && (i-2)>=0)
{
st[i]=st[i-2];
}
}
for(i=0;i<l;i++)
{
printf("%c",st[i]);
}
printf("\n");
return 0;
}
