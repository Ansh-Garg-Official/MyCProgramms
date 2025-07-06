// Diagonal Matrix
#include<stdio.h>
#include<conio.h>
int main()
{
int a[10][10],x,y,n;
char ans;
do
{
clrscr();
printf("\nEnter matrix order = ");
scanf("%d",&n);
printf("\nEnter principal diagonal elements value..\n\n");
for(y=1;y<=n;y++)
{
	for(x=1;x<=n;x++)
	{
	if(x==y)
	{
	printf("Enter value = ");
	scanf("%d",&a[y][x]);
	}
	}
}
printf("\nMatrix is %d x %d\n",n,n);
for(y=1;y<=n;y++)
{
printf("\n");
	for(x=1;x<=n;x++)
	{
		if(x!=y)
		printf("   0");
		else
		printf("%4d",a[y][x]);
	}
}
printf("\n\nWant to continue (y/n) = ");
ans=getch();
}while(ans=='y' || ans=='Y');
return 0;
}
