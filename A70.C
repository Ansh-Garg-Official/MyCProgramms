//Employee details
#include<stdio.h>
#include<conio.h>
int main()
{
struct personal
{
int empno;
char name[20],desig[20];
float salary;
}e1;
//struct personal e1;
clrscr();
printf("\nEnter name of employee = ");
gets(e1.name);
printf("Enter employee no. = ");
scanf("%d",&e1.empno);
fflush(stdin);
printf("Enter designation of employee = ");
gets(e1.desig);
printf("Enter salary of employee = ");
scanf("%f",&e1.salary);

printf("\nOutput is...\n");
printf("\nName of employee is %s.",e1.name);
printf("\nEmployee no. is %d.",e1.empno);
printf("\nDesignation of employee is %s.",e1.desig);
printf("\nSalary of employee is %.2f.",e1.salary);
getch();
return 0;
}
