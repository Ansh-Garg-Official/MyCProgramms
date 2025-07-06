// Result
#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,n3,n4,n5,sum;
float per;
char ans;
do
{
clrscr();
printf("\nEnter five subjects marks = ");
scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
if(n1<=100 && n2<=100 && n3<=100 && n4<=100 && n5<=100 )
{
sum=n1+n2+n3+n4+n5;
per=sum/5.0;
	printf("\n\nTotal marks = %d",sum);
	printf("\nPercentage = %.2f",per);
		if(n1>=33 && n2>=33 && n3>=33 && n4>=33 && n5>=33)
			if(per>=65)
			printf("\nFirst Division..");
			else
			if(per>=55)
			printf("\nSecond Division..");
			else
			if(per>=45)
			printf("\nThird Division..");
		else
			printf("\nFail..");
}
else
printf("\nIncorrect marks.");
printf("\n\nWant to continue (y/n) = ");
ans=getch();
}while(ans=='y' || ans=='Y');
return 0;
}
