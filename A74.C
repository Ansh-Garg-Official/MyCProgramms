//Switch calculator
#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
int n1,n2,choice;
clrscr();
printf("\tMENU..");
printf("\n1.Addition of two numbers");
printf("\n2.Subtraction of two numbers");
printf("\n3.Multiplication of two numbers");
printf("\n4.Division of two numbers");
printf("\n5.Exit");
printf("\nEnter choice (1-5) = ");
scanf("%d",&choice);

if(choice>=1 && choice<=4)
printf("\nEnter any two numbers = ");
scanf("%d %d",&n1,&n2);

switch(choice)
{
case 1:
printf("\nAddition of %d and %d is %d.",n1,n2,n1+n2);
break;

case 2:
printf("\nSubtraction of %d and %d is %d.",n1,n2,n1-n2);
break;

case 3:
printf("\nMultiplication of %d and %d is %d.",n1,n2,n1*n2);
break;

case 4:
printf("\nDivision of %d and %d is %d.",n1,n2,n1/n2);
break;

case 5:
exit(0);

default:
printf("\nWrong choice...");
}
getch();
}
