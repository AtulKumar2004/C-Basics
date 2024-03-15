#include <stdio.h>
#include <string.h>
struct kiit
{
int roll_no;
char name[100];
char gender[100];
int marks;
};
int main()
{
struct kiit stud;
printf("Enter the roll number of the student: ");
scanf("%d",&stud.roll_no);
getchar();
printf("Enter the name of the student: ");
gets(stud.name);
printf("Enter the gender of the student: ");
gets(stud.gender);
printf("Enter the marks of the student: ");
scanf("%d",&stud.marks);
printf("The roll number of the student is = %d\n",stud.roll_no);
printf("The name of the student is %s\n",stud.name);
printf("The gender of the student is %s\n",stud.gender);
printf("The marks of the student is = %d\n",stud.marks);
return 0;
}
