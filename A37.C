/* Pyramid
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
6 5 4 3 2 1
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int x,r,y,row,col;
clrscr();
row=4;col=40;
printf("\nEnter no. of rows = ");
scanf(" %d",&r);
for(y=1;y<=r;y++)
{
gotoxy(col,row);
	for(x=y;x>=1;x--)
	{
		printf("%d ",x);

	}
row++;

}
getch();
return 0;
}
