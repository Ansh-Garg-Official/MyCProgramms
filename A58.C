// Multiplication of Two Matrix
#include<stdio.h>
#include<conio.h>
int main()
{
int num[10][10],ctr[10][10],x,y,r,c,c1,r1,multi,o;
char ans;
do
{
clrscr();
printf("\nEnter First Matrix rows and coloumns = ");
scanf("%d %d",&r,&c);
printf("\nEnter matrix value..\n");
for(y=0;y<r;y++)
{
	for(x=0;x<c;x++)
	{
	printf("Enter value = ");
	scanf("%d",&num[y][x]);
	}
}
printf("\nMatrix is %d x %d",r,c);
for(y=0;y<r;y++)
{
printf("\n");
	for(x=0;x<c;x++)
	printf("%5d",num[y][x]);
}
printf("\n\nEnter Second Matrix rows and coloumns = ");
scanf("%d %d",&r1,&c1);
printf("\nEnter matrix value..\n");
for(y=0;y<r1;y++)
{
	for(x=0;x<c1;x++)
	{
	printf("Enter value = ");
	scanf("%d",&ctr[y][x]);
	}
}
printf("\nMatrix is %d x %d",r1,c1);
for(y=0;y<r1;y++)
{
printf("\n");
	for(x=0;x<c1;x++)
	printf("%5d",ctr[y][x]);
}
if(c==r1)
{
printf("\n\nMultiplication Matrix is %d x %d",r,c1);
for(y=0;y<r;y++)
{
printf("\n");
	for(o=0;o<c1;o++)
	{
	multi=0;
		for(x=0;x<c;x++)
		{
		multi=multi+num[y][x]*ctr[x][o];
		}
		printf("%5d",multi);
	 }
}
}
else
printf("\n\nMultiplication of the given two matrix is not possible..");
printf("\n\nWant to continue (y/n) = ");
ans=getch();
}while(ans=='y' || ans=='Y');
return 0;
}
