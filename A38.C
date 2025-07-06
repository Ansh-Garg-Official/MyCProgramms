// Sum of digits of a number     12345=15
#include<stdio.h>
#include<conio.h>
int main()
{
long int num;
int n1,sum;
char ans;
do
{
clrscr();
sum=0;
printf("\Enter any no. = ");
scanf("%ld",&num);
while(num!=0)
{
n1=num%10;
sum=sum+n1;
num=num/10;
}
printf("\nThe sum of digits of the given number is %d",sum);
fflush(stdin);
printf("\nWant to continue (y/n) = ");
scanf("%c",&ans);
}while( ans=='y' || ans=='Y' );
return 0;
}

