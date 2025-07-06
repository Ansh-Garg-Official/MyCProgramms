//Flag and !flag
#include<stdio.h>
#include<conio.h>
int main()
{
int flag;
clrscr();
printf("\nEnter any value for flag = ");
scanf("%d",&flag);
/*
if(flag)		      //0 means false and non zero value means true
printf("\nNon-Zero value.");
else
printf("\nZero value.");
*/
if(!flag)
printf("\nZero value");
else
printf("\nNon-Zero value.");
getch();
return 0;
}