#include <stdio.h>
#include <string.h>
int main()
{
int p=0,c=0,i,j,k,ccons=0,cvow=0;
char st[100];
printf("Enter the string :");
gets(st);
int l=strlen(st);
char *ptr=st;
for(i=0;i<l;i++)
{
if((ptr[i]>=65 && ptr[i]<=90) || (ptr[i]>=97 && ptr[i]<=122))
{
p=0;c=0;
for(k=0;k<i;k++)
{
if(ptr[i]==ptr[k])
{
p=1;
break;
}
}
if(p==1)
{
continue;
}
for(j=i;j<l;j++)
{
if(ptr[j]==ptr[i])
{
c++;
}
}
if(c==1 && (ptr[i]=='a' || ptr[i]=='e' || ptr[i]=='i'|| ptr[i]=='o' || ptr[i]=='u' 
|| ptr[i]=='A' || ptr[i]=='E' || ptr[i]=='I' || ptr[i]=='O' || ptr[i]=='U'))
{
cvow++;
}
else if(c==1)
{
ccons++;
}
}
}
printf("Total number of distinct vowels = %d\n",cvow);
printf("Total number of distinct consonants = %d\n",ccons);
return 0;
}
