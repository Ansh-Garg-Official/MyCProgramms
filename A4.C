/* Driver insurance
Married person is insured.Unmarried male of age greater than 30 and
unmarried female of age greater than 20 is insured.Rest are not insured.*/

#include<stdio.h>
#include<conio.h>
int main()
{
char ms,gender;
int age;
clrscr();
printf("Enter your martial status,gender and age =");
scanf("%c%c%d",&ms,&gender,&age);
if(ms=='m')
{
printf("\nMarried driver is insured");
}
else
 {
		if(gender=='m' && age>30)
		{
		printf("\nUnmarried male driver of age greater than 30 is insured.");
		}
		else
		if(gender=='F' && age>20)
		{
		printf("\nUnmarried female driver of age greater than 20 is insured.");
		}
		else
		{printf("\nDriver is not insured.");}
		}

getch();
return 0;
}

