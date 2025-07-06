// Factorial of a number
#include<stdio.h>
#include<conio.h>
int main()
{
int n1,multi;
char ans;
do
{
multi=1;
clrscr();
printf("\Enter any no. = ");
scanf("%d",&n1);
while(n1>=1)
{
multi=multi*n1;
n1--;
}
printf("\nThe factorial of the given number is %d ",multi);
printf("\nWant to continue (y/n) = ");
ans=getche();
	//scanf(" %c",&ans);
}while( ans=='y' || ans=='Y' );
return 0;
}

