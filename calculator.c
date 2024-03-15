#include <stdio.h>
int main(){
int a,b;
char ch;
printf("Enter choice to perform +,-,*,/ and then enter two numbers\n");
scanf("%c",&ch);
scanf("%d",&a);
scanf("%d",&b);
switch(ch){
case '+':
printf("Addition = %d\n",a+b);
break;
case '-':
printf("Subtraction = %d\n",a-b);
break;
case '*':
printf("Multiplication = %d\n",a*b);
break;
case '/':
printf("Division= %d\n",a/b);
break;
default:
printf("Wrong input please select one choice among +,-,*,/ and then two integers \n");
}
}
