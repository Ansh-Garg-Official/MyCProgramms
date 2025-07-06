// Celcius into Farenheit and vice versa using switch command
#include<stdio.h>
#include<conio.h>
#include<process.h>
int main()
{
float temp,temp1;
char ans;
int choice;
do
{
clrscr();
printf("\n\tMenu.");
printf("\n1.Celcius into Farenheit.");
printf("\n2.Farenheit into Celcius.");
printf("\n3.Exit");
printf("\nEnter choice (1-3) = ");
scanf("%d",&choice);

if(choice>=1 && choice <=2)
{
printf("\nEnter temperature = ");
scanf("%f",&temp);
}
switch(choice)
{
case 1:
temp1=32+(temp*9/5);
printf("\n%.2f in Farenheit.",temp,temp1);
break;

case 2:
temp1=5*(temp-32)/9;
printf("\n%.2f in Celcius.",temp,temp1);
break;

case 3:
exit(0);

default:
printf("\nWrong choice.");
}
fflush(stdin);
printf("\nWant to continue (y/n) = ");
scanf("%c",&ans);
}while( ans=='y' || ans=='Y');
return 0;
}


