//Reverse Even Counting from 2n to 1
#include<stdio.h>
#include<conio.h>
int main()
{
int n,ctr;
clrscr();
printf("\nEnter the counting limit = ");
scanf("%d",&n);  //DO NOT LEAVE SPACE AFTER ANY FORMAT SPECIFIER     ]
if(n%2!=0)
{
printf("\nThe given number is not even. ");
}
else
	for(ctr=n;ctr>=2;ctr-=2)
	{
	printf("\nThe counting is %d ",ctr);
	}
getch();
return 0;
}
