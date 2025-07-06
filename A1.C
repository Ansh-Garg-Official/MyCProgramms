//Greater and smaller of two numbers
#include<stdio.h>
#include<conio.h>
int main()
{
float a,b;
clrscr();
printf("\nEnter any two numbers=");
scanf("%f%f",&a,&b);
if(a==b)
{
printf("\nBoth are equal");
}
else
	if(a>b)
	{
	printf("\nGreater no is %f",a);
	printf("\nSmaller no is %f",b);
	}
	else
	{
	printf("\nGreater no is %f",b);
	printf("\nSmaller no is %f",a);
	}
getch();
return 0;
}



