// Vowel or not
#include<stdio.h>
#include<conio.h>
int main()
{
char ans,letter;
do
{
clrscr();
printf("\nEnter any letter = ");
letter=getche();
	/* fflush(stdin);
	letter=getchar(); */
	//letter=getch();
	//scanf(" %c",&letter);

switch(letter)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("\n%c is a vowel.",letter);
break;

default:
printf("\n%c is not a vowel.",letter);
break;
}
printf("\nWant to continue (y/n) = ");
ans=getch();  //scanf(" %c",&ans);
}while(ans=='y' || ans=='Y');
return 0;
}
