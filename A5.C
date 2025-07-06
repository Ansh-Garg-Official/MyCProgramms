//Good version of greater and smaller of three numbers
#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c,h,s,m;
clrscr();
printf("Enter any 3 numbers=");
scanf("%f%f%f",&a,&b,&c);
if(a==b && b==c)
{
printf("\nAll are equal");
}
else
{
	if(a>b)
	{
	h=a;
	s=b;
	}
	else
	{
	h=b;
	s=a;
	}
		if(c>h)
		{
		m=h;
		h=c;
		}
		else
		if(c<s)
		{
		m=s;
		s=c;
		}
		else
		{
		m=c;
		}

		printf("\nGreatest no is %f",h);
		printf("\nMiddle no is %f",m);
		printf("\nSmallest no is %f",s);
 }
getch();
}

