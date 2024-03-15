#include <stdio.h>
#include <string.h>
int main()
{
int i=0;
char st[100];
printf("Enter a string: ");
gets(st);
int l=strlen(st);
for(i=0;i<l;i++)
{
if (st[i+1]==' ' || st[i+1]=='\0')
{
printf("%c",st[i]);
}
}
printf("\n");
return 0;
}
