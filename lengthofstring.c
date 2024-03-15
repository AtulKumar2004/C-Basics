#include <stdio.h>
#include <string.h>
int main()
{
int max=100,i=0,c=0;
char a[max];
printf("Enter the string\n");
gets(a);
while(a[i]!='\0')
{
c++;
i++;
}
printf("%d",c);
// printf("%ld",strlen(a));
return 0;
}
