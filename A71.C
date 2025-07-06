//Strong no. or not           Strong no.
//			   145=1!+4!+5!
#include<stdio.h>
#include<conio.h>
void main()
{
int num,a,b,ctr,x,sum=0;
clrscr();
printf("\nEnter any number = ");
scanf("%d",&num);
b=num;
while(b!=0)
{
ctr=1;
a=b%10;
	while(a!=1)
	{
	ctr=ctr*a;
	a=a-1;
	}
	sum=sum+ctr;
b=b/10;
}
if(num==sum)
printf("\n%d is a strong no.",num);
else
printf("\n%d is not a strong no.",num);
getch();
}



