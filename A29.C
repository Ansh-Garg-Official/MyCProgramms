//Counting from 1 to n
#include<stdio.h>
#include<conio.h>
int main()
{
int n,ctr=0;
clrscr();
printf("\nEnter the counting limit = ");
scanf("%d",&n);  //DO NOT LEAVE SPACE AFTER ANY FORMAT SPECIFIER
while(ctr++<n)
{
printf("\nThe counting is %d ",ctr);
}
getch();
return 0;
}
