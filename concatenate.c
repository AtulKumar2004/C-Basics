#include <stdio.h>
int main()
{
int i=0,j=0;
char a[100];
char b[100];
char ns[100];
printf("Enter the string: ");
gets(a);
printf("Enter another string: ");
gets(b);
while(a[i]!='\0')
{
ns[i]=a[i];
i++;
}
while(b[j]!='\0')
{
ns[i++]=b[j++];
}
printf("concatenated string:\n");
printf("%s",ns);
return 0;
}
