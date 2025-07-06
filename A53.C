// Array
#include<stdio.h>
#include<conio.h>
int main()
{
int ctr,num[10];
char ans;
do
{
clrscr();
for(ctr=1;ctr<=5;ctr++)
{
printf("\nEnter value = ");
scanf("%d",&num[ctr]);
}
for(ctr=1;ctr<=5;ctr++)
printf("\nEntered value is %d",num[ctr]);
printf("\n\nWant to continue (y/n) = ");
ans=getch();
}while(ans=='y' || ans=='Y');
return 0;
}
