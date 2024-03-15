#include <stdio.h>
#include <string.h>
int main()
{
int i,l,nvow=0,ncons=0,nwor=0,nline=1,nchar=-1;
char st[100];
printf("Enter a string: ");
gets(st);
l=strlen(st);
for(i=0;i<=l;i++)
{
if(st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u' || st[i]=='A' || st[i]=='E' || st[i]=='I' || st[i]=='O' || st[i]=='U')
{
nvow++;
}
else if((st[i]>=65 && st[i]>=90) || (st[i]>=97 && st[i]<=122))
{
ncons++;
}
else if(st[i]==' ' || st[i] == '\0')
{
nwor++;
}
else if(st[i]=='\n')
{
nline++;
}
nchar++;
}
printf("Number of vowels: %d\n",nvow);
printf("Number of consonants: %d\n",ncons);
printf("Number of words: %d\n",nwor);
printf("Number of lines: %d\n",nline);
printf("Number of characters: %d\n",nchar);
return 0;
}

