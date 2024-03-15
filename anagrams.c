#include <stdio.h>
#include <string.h>
int main()
{
int i,j,p=0;
char st1[100],st2[100];
printf("Enter a string: ");
gets(st1);
printf("Enter another string: ");
gets(st2);
int l1=strlen(st1);
int l2=strlen(st2);
if(l1==l2)
{
for(i=0;i<l1;i++)
{
p=0;
for(j=0;j<l2;j++)
{
if(st1[i]==st2[j])
{
p=1;
break;
}
}
if(p==0)
{
printf("Two strings are not anagrams\n");
break;
}
}
if(p==1)
{
printf("Two strings are anagrams\n");
}
}
else
{
printf("Two strings are not anagrams\n");
}
return 0;
}
