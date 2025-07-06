// Area of circle and square  with #define
#include<stdio.h>
#include<conio.h>
#define pi 3.141
#define carea(x)  pi*x*x
#define sarea(x) x*x
int main()
{
float r,s; // carea,sarea;
char ans;
do
{
clrscr();
printf("\nEnter radius of circle = ");
scanf("%f",&r);
printf("Enter side of square = ");
scanf("%f",&s);
//carea=pi*r*r;
//sarea=s*s;
printf("\nArea of circle is %.3f.",carea(r));
printf("\nArea of the square is %.3f.",sarea(s));
fflush(stdin);
printf("\n\nWant to continue (y/n) = ");
ans=getche();
}while(ans=='y' || ans=='Y');
return 0;
}