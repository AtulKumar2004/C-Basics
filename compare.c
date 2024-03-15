/*printf("if string 1>string 2 then +ve integer is displayed\nif string 1<string 2 negative number is displayed\nif both strings are equal 0 is displayed\n");*/
#include <stdio.h>
#include <string.h>
int main()
{
int i=0,c=0,lmin;
char a[100];
char b[100];
printf("Enter string 1: ");
fgets(a,100,stdin);
printf("Enter string 2: ");
fgets(b,100,stdin);
int l1=strlen(a)-1;
int l2=strlen(b)-1;
if(l1>l2)
{
lmin=l2;
}
else if(l1<l2)
{
lmin=l1;
}
else
{
lmin=l1;
}
for(i=0;i<lmin;i++)
{
if(a[i]-b[i]!=0)
{
printf("%d\n",a[i]-b[i]);
c=1;
break;
}
}
if(c==0)
{
printf("%d\n",l1-l2);
}
return 0;
}
