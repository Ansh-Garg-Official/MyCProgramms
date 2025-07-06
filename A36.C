/* H.W. question no. 2
    * * * *
    * * * *
    * * * *
	    * * * *
	    * * * *
	    * * * *
    * * * *
    * * * *
    * * * *
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int x,y,z,row,col,limit,r,c;
char ans;
do
{
clrscr();
row=4; col=3;
printf("\nEnter no. of rows, coloumns and limit = ");
scanf("%d %d %d",&r,&c,&limit);
for(z=1;z<=limit;z++)
{

col=3;
if(z%2!=0)
	{
		for(y=1;y<=r;y++)
		{
		gotoxy(col,row);
			for(x=1;x<=c;x++)
			{
			printf("* ");
			}
		row++;
		}
	}

else
	{
		col=col+2*c;
		for(y=1;y<=r;y++)
		{
		gotoxy(col,row);
			for(x=1;x<=c;x++)
			{
			printf("* ");
			}
		row++;
		}
	}
}
fflush(stdin);
printf("\nWant to continue (y/n) = ");
scanf("%c",&ans);
}while(ans=='y' || ans=='Y');
return 0;
}
