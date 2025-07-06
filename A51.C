// Armstrong no. or not
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int num,sum,a,b,ctr;
float n1;
char ans;
do
{
clrscr();
printf("\nEnter any number = ");
scanf("%d",&num);
a=num;b=num;
ctr=0;sum=0;
while(num!=0)
{
ctr=ctr+1;
num=num/10;
}
num=b;
while(num!=0)
{
n1=num%10;
sum=sum+pow(n1,ctr);
num=num/10;
}
if(sum==a)
printf("\n%d is a Armstrong no.",a);
else
printf("\n%d is not a Armstrong no.",a);
printf("\n\nWant to continue (y/n) = ");
ans=getch();
}while(ans=='y' || ans=='Y');
return 0;
}

