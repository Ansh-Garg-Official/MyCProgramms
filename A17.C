//Even Counting from 1 to 2n
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
	for(ctr=2;ctr<=n;ctr+=2)
	{
	printf("\nThe counting is %d ",ctr);
	}
getch();
return 0;
}
