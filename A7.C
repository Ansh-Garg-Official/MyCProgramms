//Compound interest
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float p,r,t,ci,amt;
clrscr();
printf("\nEnter the principle,rate,time =");
scanf("%f %f %f",&p,&r,&t);
ci=p*(pow((1+r/100),t))-p;
printf("\nThe coumpond interest is %.2f",ci);
amt=p+ci;
printf("\nThe total amount is %.2f",amt);
getch();
return 0;
}