/* Centralised Pyramid using do ... while
		*
	      *	* *
	    * *	* * *
	  * * * * * * *

*/
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
for(y=1;y<=2*r-1;y+=2)
{
gotoxy(col,row);
	for(x=1;x<=y;x++)
	{
	printf("* ");
	}
row++;
col-=2;
}
fflush(stdin);
printf("\nWant to continue (y/n) = ");
scanf("%c",&ans);
}while(ans=='y' || ans=='Y');
return 0;
}
