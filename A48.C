// Prime no. or not
#include<stdio.h>
#include<conio.h>
int main()
{
int num,ctr;
char ans;
do
{
ctr=2;
clrscr();
printf("\nEnter any number = ");
scanf("%d",&num);
while(ctr<num)
{
if(num%ctr==0)
break;
else
ctr++;
}
if(ctr==num)
printf("\n%d is a prime number.",num);
else
printf("\n%d is not a prime number.",num);
printf("\n\nWant to continue (y/n) = ");
ans=getch();
}while(ans=='y' || ans=='Y');
return 0;
}

