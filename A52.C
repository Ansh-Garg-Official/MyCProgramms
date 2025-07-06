// Armstrong no. from 1 to 1000
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int num,sum,a,b,ctr;
float n1;
char ans;
clrscr();
printf("Armstrong no. from 1 to 1000 are \n\n");
for(num=1;num<=1000;num++)
{
ctr=0;sum=0;
a=num;b=num;
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
printf("\t%d",a);
num=a;
}
getch();
return 0;
}

