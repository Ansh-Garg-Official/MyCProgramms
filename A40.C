// Check whether a number is palindromic or not
#include<stdio.h>
#include<conio.h>
int main()
{
long int num,rev,a;
int n1;
char ans;
do
{
clrscr();
rev=0;
printf("\Enter any no. = ");
scanf("%ld",&num);
a=num;
while(num!=0)
{
n1=num%10;
rev=rev*10+n1;
num=num/10;
}
if(a==rev)
printf("\nThe given number is palindromic.");
else
printf("\nThe given number is not palindromic.");
fflush(stdin);
printf("\nWant to continue (y/n) = ");
scanf("%c",&ans);
}while( ans=='y' || ans=='Y' );
return 0;
}

