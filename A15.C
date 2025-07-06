// multiple of m upto n times with stoppage at 10
#include<stdio.h>
#include<conio.h>
int main()
{
int m,n,ctr=0,limit=0;
clrscr();
printf("Enter the multiple no. and its limit = ");
scanf("%d %d",&m,&n);
while(++ctr<=n)
{
++limit;
printf("\n%3d   X %3d = %3d",m,ctr,m*ctr);
	if(limit==10)
	{
	printf("\nPress enter to continue...");
	getch();
	clrscr();
	limit=0;
	}
}
getch();
return 0;
}