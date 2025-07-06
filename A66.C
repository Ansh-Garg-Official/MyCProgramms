//string length
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[20];
int len;
clrscr();
printf("\nEnter string value = ");
gets(name);
len=strlen(name);
printf("\nThe length of string is %d",len);
getch();
}