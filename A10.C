//Sum of first N natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
clrscr();
printf("\nEnter any natural number(N)=");
scanf("%d",&a);
if(a>0)
{
b=a*(a+1)/2;
printf("\nThe sum of first N natural numbers is %d",b);
}
else
printf("\nEntered number is not a natural number.");

getch();
return 0;
}