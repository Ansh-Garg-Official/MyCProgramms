// Simple calculator using switch command
#include<stdio.h>
#include<conio.h>
#include<process.h>
int main()
{
float n1,n2;
char ans;
int choice;
do
{
clrscr();
printf("\n\tMenu.");
printf("\n1.Addition of two no's");
printf("\n2.Subtraction of two no's");
printf("\n3.Multiplication of two no's");
printf("\n4.Division of two no's");
printf("\n5.Exit");
printf("\nEnter choice (1-5) = ");
scanf("%d",&choice);

if(choice>=1 && choice <=4)
{
printf("\nEnter any two numbers = ");
scanf("%f %f",&n1,&n2);
}
switch(choice)
{
case 1:
printf("\nAddition of %.2f and %.2f is %.2f",n1,n2,n1+n2);
break;

case 2:
printf("\nSubtraction of %.2f and %.2f is %.2f",n1,n2,n1-n2);
break;

case 3:
printf("\nMultiplication of %.2f and %.2f is %.2f",n1,n2,n1*n2);
break;

case 4:
printf("\nDivision of %.2f and %.2f is %.2f",n1,n2,n1/n2);
break;

case 5:
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


