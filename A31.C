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
scanf(" %c %c%d",&ms,&gender,&age);
if(ms=='m'|| gender=='M' && age>30 || gender=='F' && age>20)
{
printf("\nDriver is insured.");
}
else
{
printf("\nDrivr is not inscured.");
}
getch();
return 0;
}

