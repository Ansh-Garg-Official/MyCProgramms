// HCF and LCM of two numbers
#include<stdio.h>
#include<conio.h>
#define max(a,b) (a>b?a:b)
void main()
{
int n1,n2,b,c,ctr,hcf,lcm;
char ans;
do
{
hcf=1;
ctr=2;
clrscr();
printf("\nEnter any two numbers = ");
scanf("%d %d",&n1,&n2);
b=n1;c=n2;
while(ctr<=max(n1,n2) && b!=1 && c!=1)
{
	if(b%ctr==0 && c%ctr==0)
	{
	b=b/ctr;
	c=c/ctr;
	hcf=hcf*ctr;
	ctr=2;
	}
	else
	ctr++;
}
lcm=n1*n2/hcf;
printf("\nHCF of %d and %d is %d.",n1,n2,hcf);
printf("\nLCM of %d and %d is %d.",n1,n2,lcm);
printf("\n\nWant to continue (y/n) = ");
ans=getche();
}while(ans=='y' || ans=='Y');
}



