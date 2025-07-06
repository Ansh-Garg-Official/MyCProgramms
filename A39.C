// Reverse of digits of a number     12345=54321
#include<stdio.h>
#include<conio.h>
int main()
{
long int num,rev;
int n1;
char ans;
do
{
clrscr();
rev=0;
printf("\Enter any no. = ");
scanf("%ld",&num);
while(num!=0)
{
n1=num%10;
rev=rev*10+n1;
num=num/10;
}
printf("\nThe Reverse of the given number is %ld",rev);
fflush(stdin);
printf("\nWant to continue (y/n) = ");
scanf("%c",&ans);
}while( ans=='y' || ans=='Y' );
return 0;
}

