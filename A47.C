// Swapping of the two entered numbers using a third variable
#include<stdio.h>
#include<conio.h>
int main()
{
int ctr,n1,n2;
char ans;
do
{
clrscr();
printf("\nEnter First number = ");
scanf("%d",&n1);
printf("\nEnter Second number = ");
scanf("%d",&n2);
printf("\n\nBefore swapping:");
printf("\n First number = %d",n1);
printf("\n Second number = %d",n2);
ctr=n1;
n1=n2;
n2=ctr;
printf("\n\nAfter swapping:");
printf("\n First number = %d",n1);
printf("\n Second number = %d",n2);
	   //fflush(stdin);
printf("\n\nWant to continue (y/n) = ");
ans=getche();           //scanf("%c",&ans);
}while( ans=='y' || ans=='Y' );
return 0;
}

