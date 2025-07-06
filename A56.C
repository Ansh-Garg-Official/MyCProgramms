// Transpose of a Matrix
#include<stdio.h>
#include<conio.h>
int main()
{
int num[10][10],x,y,r,c;
char ans;
do
{
clrscr();
printf("\nEnter matrix rows and coloumns = ");
scanf("%d %d",&r,&c);
printf("\nEnter matrix value..\n");
for(y=1;y<=r;y++)
{
	for(x=1;x<=c;x++)
	{
	printf("Enter value = ");
	scanf("%d",&num[y][x]);
	}
}
printf("\nMatrix is %d x %d",r,c);
for(y=1;y<=r;y++)
{
printf("\n");
	for(x=1;x<=c;x++)
	printf("%5d",num[y][x]);
}
printf("\n\nTranspose Matrix is %d x %d",c,r);
for(x=1;x<=c;x++)
{
printf("\n");
	for(y=1;y<=r;y++)
	printf("%5d",num[y][x]);
}
printf("\n\nWant to continue (y/n) = ");
ans=getch();
}while(ans=='y' || ans=='Y');
return 0;
}
