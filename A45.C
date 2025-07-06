// Count the no. of digits in a number
#include<stdio.h>
#include<conio.h>
int main()
{
long int num;
int ctr;
char ans;
do
{
clrscr();
ctr=0;
printf("\Enter any no. = ");
scanf("%ld",&num);
while(num!=0)
{
ctr=ctr+1;
num=num/10;
}
printf("\nThe no. of digits in the given number is %d",ctr);
	   //fflush(stdin);
printf("\nWant to continue (y/n) = ");
ans=getche();           //scanf("%c",&ans);
}while( ans=='y' || ans=='Y' );
return 0;
}

