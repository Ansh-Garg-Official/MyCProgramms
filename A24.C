/* Pyramid
1
1 2
1 2 3
1 2 3 4
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int r,x,y,row=4,col=1;
clrscr();
printf("\nEnter no. of rows = ");
scanf(" %d",&r);
for(y=1;y<=r;++y)
{
gotoxy(col,row);
	for(x=1;x<=y;x++)
	{
	printf("%2d ",x);
	}
row++;
}
getch();
return 0;
}