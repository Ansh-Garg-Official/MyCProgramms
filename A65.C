//string
//Value assigned is surrounded ny double quotes
#include<stdio.h>
#include<conio.h>
void main()
{
char name[20],ename[20];
int i;
clrscr();
printf("\nEnter string value = ");
gets(name);
printf("\nString value is %s.",name);
for(i=0;name[i]!='\0';i++)   //NULL character ('\0') means end of string
{
printf("\nCharacter value is %c",name[i]);
}
getch();
}