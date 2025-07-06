/* Pyramid
*
* *
* * *
* * * *
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int r,x,y;
clrscr();
printf("\nEnter no. of rows = ");
scanf(" %d",&r);
for(y=1;y<=r;++y)
{
printf("\n");
	for(x=1;x<=y;x++)
	{
	printf("* ");
	}
}
getch();
return 0;
}