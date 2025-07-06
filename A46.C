// Writing Fibonacci series
// 0,1,1,2,3,5,8,13,21......
#include<stdio.h>
#include<conio.h>
int main()
{
long int num;
int ctr,a,b,sum;
char ans;
do
{
clrscr();
ctr=0;a=0;b=1;sum=1;
printf("\Enter series limit = ");
scanf("%ld",&num);
printf("\nThe first %d no. of the series are %d,%d",num,a,b);
while(sum<=num-2)
{
ctr=a+b;
a=b;
b=ctr;
sum++;
printf(",%d",ctr);
}
	   //fflush(stdin);
printf("\nWant to continue (y/n) = ");
ans=getche();           //scanf("%c",&ans);
}while( ans=='y' || ans=='Y' );
return 0;
}

