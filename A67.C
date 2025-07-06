//string copy
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[20],ename[20];
int len;
clrscr();
printf("\nEnter value of name = ");
gets(name);
strcpy(ename,name);
printf("\nValue of ename is %s",ename);
strcpy(ename,"Rajesh Verma");
printf("\nValue of ename is %s",ename);
getch();
}