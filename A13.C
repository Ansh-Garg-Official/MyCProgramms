/*pyramid
1
1 2
1 2 3
1 2 3 4 */
#include<stdio.h>
#include<conio.h>
int main()
{
int r,x,y=0;
clrscr();
printf("\nEnter number of rows = ");
scanf("%d",&r);
while(++y<=r)
{
x=0;
printf("\n");

	while(++x<=y)
	{
	printf("%d ",x);
	}
}
getch();
return 0;
}

