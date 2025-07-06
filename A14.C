// multiple of m upto n times without any stoppage
#include<stdio.h>
#include<conio.h>
int main()
{
int m,n,ctr=0;
clrscr();
printf("Enter the multiple no. and its limit = ");
scanf("%d %d",&m,&n);
while(++ctr<=n)
{
printf("\n%3d   X %3d = %3d",m,ctr,m*ctr);
}
getch();
return 0;
}
