/* ternary operator
(codition?true:false);
Greater and Smaller of two numbers
*/
#include<stdio.h>
#include<conio.h>
#define max(a,b) (a>b?a:b)
void main()
{
int n1,n2,ans;
clrscr();
printf("\nEnter two numbers = ");
scanf("%d %d",&n1,&n2);
//ans=(n1==n2?0:(n1>n2?n1:n2));
ans=(max(n1,n2));
printf("\nMaximun no. is %d",ans);
getch();
}