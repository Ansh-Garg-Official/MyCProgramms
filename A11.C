//Conversion of celsius into kelvin and fahrenheit
#include<stdio.h>
#include<conio.h>
int main()
{
float C,K,F;
clrscr();
printf("\nEnter any temperature in Celsius =");
scanf("%f",&C);
K=C+273.15;
F=(C*9/5)+32;
printf("\nThe temperature in Kelvin =  %.3f",K);
printf("\nThe temperature in Fahrenheit = %.3f",F);

getch();
return 0;
}