//string concatination
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
printf("\nEnter value of ename = ");
gets(ename);
strcat(name,ename);
printf("\nValue of ename is %s",name);
strcat(name," Verma");
printf("\nValue of ename is %s",name);
getch();
}