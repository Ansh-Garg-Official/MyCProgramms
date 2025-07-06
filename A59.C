// Area of circle and square  (NORMAL)
#include<stdio.h>
#include<conio.h>
int main()
{
float r,carea,s,sarea;
char ans;
do
{
clrscr();
printf("\nEnter radius of circle = ");
scanf("%f",&r);
printf("Enter side of square = ");
scanf("%f",&s);
carea=3.14*r*r;
sarea=s*s;
printf("\nArea of circle is %.3f.",carea);
printf("\nArea of the square is %.3f.",sarea);
fflush(stdin);
printf("\n\nWant to continue (y/n) = ");
ans=getche();
}while(ans=='y' || ans=='Y');
return 0;
}