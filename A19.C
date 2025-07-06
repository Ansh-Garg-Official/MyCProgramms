//Reverse Counting from n to 1
#include<stdio.h>
#include<conio.h>
int main()
{
int n,ctr;
clrscr();
printf("\nEnter the counting limit = ");
scanf("%d",&n);  //DO NOT LEAVE SPACE AFTER ANY FORMAT SPECIFIER
for(ctr=n;ctr>=1;ctr--)
{
printf("\nThe counting is %d ",ctr);
}
getch();
return 0;
}
