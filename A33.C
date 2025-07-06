// Hollow diamond using do ... while
#include<stdio.h>
#include<conio.h>
int main()
{
int x,r,y,row,col;
char ans;
do
{
clrscr();
row=4;col=40;
printf("\nEnter no. of rows = ");
scanf(" %d",&r);
for(y=1;y<=r;y++)
{
gotoxy(col,row);
	for(x=1;x<=y;x++)
	{
		if(x==1 || x==y)
		printf("* ");
		else
		printf("  ");
	}
row++;
col--;
}
col+=2;
for(y=r-1;y>=1;y--)
{
gotoxy(col,row);
	for(x=1;x<=y;x++)
	{
		if(x==1 || x==y)
		printf("* ");
		else
		printf("  ");
	}
row++;
col++;
}
fflush(stdin);
printf("\nWant to continue (y/n) = ");
scanf("%c",&ans);
}while(ans=='y' || ans=='Y');
return 0;
}
