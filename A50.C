// Leap year checker
#include<stdio.h>
#include<conio.h>
int main()
{
int year;
char ans;
do
{
clrscr();
printf("\nEnter year = ");
scanf("%d",&year);
if(year%100==0)
{
if(year%400==0)
printf("\n%d is a leap year.",year);
else
printf("\n%d is not a leap year.",year);
}
else
{
if(year%4==0)
printf("\n%d is a leap year.",year);
else
printf("\n%d is not a leap year.",year);
}
printf("\n\nWant to continue (y/n) = ");
ans=getch();
}while(ans=='y' || ans=='Y');
return 0;
}

