// Prime factorization of a number
#include<stdio.h>
#include<conio.h>
void main()
{
int num,b,ctr;
char ans;
do
{
ctr=2;
clrscr();
printf("\nEnter any number = ");
scanf("%d",&num);
printf("\nPrime factors of %d are = ",num);
b=num;
while(ctr<=num && b!=1)
{
	if(b%ctr==0)
	{
	b=b/ctr;
	printf("%d ",ctr);
	ctr=2;
	}
	else
	ctr++;
}
printf("\n\nWant to continue (y/n) = ");
ans=getche();
}while(ans=='y' || ans=='Y');
}



