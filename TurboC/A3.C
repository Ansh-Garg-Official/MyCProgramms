//Calculator of two numbers
#include<stdio.h>
#include<conio.h>
void main()
{
float n1,n2,sum,sub,mul,div;
clrscr();
printf("Enter any two numbers =");
scanf("%f%f",&n1,&n2);
sum=n1+n2;
sub=n1-n2;
mul=n1*n2;
div=n1/n2;
printf("\nThe addition of two numbers = %f",sum);
printf("\nThe subtraction of two numbers = %f",sub);
printf("\nThe multuplication of two numbers = %f",mul);
printf("\nThe division of two numbers = %f",div);
getch();
}

