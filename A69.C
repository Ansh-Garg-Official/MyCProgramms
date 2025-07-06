//string other cammonds
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
strupr(name);
printf("\nValue of name = %s",name);
strlwr(name);
printf("\nValue of name = %s",name);
strrev(name);
printf("\nValue of name = %s",name);
getch();
}