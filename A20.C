//Reverse Odd Counting from 2n+1 to 1
#include<stdio.h>
#include<conio.h>
int main()
{
int n,ctr;
clrscr();
printf("\nEnter the counting limit = ");
scanf("%d",&n);  //DO NOT LEAVE SPACE AFTER ANY FORMAT SPECIFIER     ]
if(n%2==0)
{
printf("\nThe given number is not ODD. ");
}
else
	for(ctr=n;ctr>=1;ctr-=2)
	{
	printf("\nThe counting is %d ",ctr);
	}
getch();
return 0;
}
