/* H.W. Question no. 1
	   1
	 1 2 1
       1 2 3 2 1
     1 2 3 4 3 2 1
   1 2 3 4 5 4 3 2 1
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
		 if(x<=(y+1)/2)
			{
			printf("%d ",x);
			}
	}
row++;
col-=2;
}
row=5; col=42;
for(y=1;y<=r-1;y++)
{
gotoxy(col,row);
	for(x=y;x>=1;x--)
	{
		printf("%d ",x);

	}
row++;
}
fflush(stdin);
printf("\nWant to continue (y/n) = ");
scanf("%c",&ans);
}while( ans=='y' || ans=='Y' );
return 0;
}
