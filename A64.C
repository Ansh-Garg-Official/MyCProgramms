// Sum of elements of rows and coloumns of a Matrix
#include<stdio.h>
#include<conio.h>
int main()
{
int num[10][10],x,y,r,c,s1;
char ans;
do
{
clrscr();
printf("\nEnter matrix rows and coloumns = ");
scanf("%d %d",&r,&c);
printf("\nEnter matrix value..\n");
for(y=1;y<=r;y++)
{
	for(x=1;x<=c;x++)
	{
	printf("Enter value = ");
	scanf("%d",&num[y][x]);
	}
}
printf("\nMatrix is %d x %d",r,c);
for(y=1;y<=r;y++)
{
printf("\n\n");
	for(x=1;x<=c;x++)
	printf("%5d",num[y][x]);
}
printf("\n\n");
for(x=1;x<=c;x++)
{
s1=0;
	for(y=1;y<=r;y++)
	{
	s1=s1+num[y][x];
	}
	printf("\nThe sum of elemets of %d coloumn is %d .",x,s1);
}
for(y=1;y<=r;y++)
{
s1=0;
	for(x=1;x<=c;x++)
	{
	s1=s1+num[y][x];
	}
	printf("\nThe sum of elemets of %d row is %d .",y,s1);

}
printf("\n\nWant to continue (y/n) = ");
ans=getch();
}while(ans=='y' || ans=='Y');
return 0;
}
