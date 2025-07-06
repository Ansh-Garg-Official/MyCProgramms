 //Greatest and Smallest of three numbers
#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,c;
clrscr();
printf("Enter any 3 numbers=");
scanf("%f%f%f",&a,&b,&c);
if(a==b && b==c)
{
printf("\nAll are equal");
}
else
	if(a==b && b>c)
	{
	printf("\nGreatest no is %f",a);
	printf("\nSmallest no is %f",c);
	}
	if(a==b && b<c)
	{
	printf("\nGreatest no is %f",c);
	printf("\nSmallest no is %f",a);
	}
	if(a==c && a>b)
	{
	printf("\nGreatest no is %f",a);
	printf("\nSmallest no is %f",b);
	}
	if(a==c && a<b)
	{
	printf("\nGreatest no is %f",b);
	printf("\nSmallest no is %f",a);
	}
	if(c==b && b>a)
	{
	printf("\nGreatest no is %f",b);
	printf("\nSmallest no is %f",a);
	}
	if(c==b && b<a)
	{
	printf("\nGreatest no is %f",a);
	printf("\nSmallest no is %f",c);
	}
	if(a>b && b>c)
	{
	printf("\nGreatest no is %f",a);
	printf("\nMiddle no is %f",b);
	printf("\nSmallest no is %f",c);
	}
	if(a>c && c>b)
	{
	printf("\nGreatest no is %f",a);
	printf("\nMiddle no is %f",c);
	printf("\nSmallest no is %f",b);
	}
	if(c>b && b>a)
	{
	printf("\nGreatest no is %f",c);
	printf("\nMiddle no is %f",b);
	printf("\nSmallest no is %f",a);
	}
	if(c>a && a>b)
	{
	printf("\nGreatest no is %f",c);
	printf("\nMiddle no is %f",a);
	printf("\nSmallest no is %f",b);
	}
	if(b>a && a>c)
	{
	printf("\nGreatest no is %f",b);
	printf("\nMiddle no is %f",a);
	printf("\nSmallest no is %f",c);
	}
	if(b>c && c>a)
	{
	printf("\nGreatest no is %f",b);
	printf("\nMiddle no is %f",c);
	printf("\nSmallest no is %f",a);
	}
getch();
}

