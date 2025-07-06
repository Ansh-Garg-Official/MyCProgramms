/* Centralised Diamond
	      *
	     * *
	    * * *
	     * *
	      *
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int r,x,y,row=4,col=40; // Computer screen is of 80x25 characters
clrscr();
printf("\nEnter no. of rows = ");
scanf(" %d",&r);
for(y=1;y<=r;++y)
{
gotoxy(col,row);
	for(x=1;x<=y;x++)
	{
	printf("* ");
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
	printf("* ");
	}
row++;
col++;
}
getch();
return 0;
}