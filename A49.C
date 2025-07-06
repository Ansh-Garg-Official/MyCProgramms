// Prime no. from 1 to 100
#include<stdio.h>
#include<conio.h>
int main()
{
int num,ctr;
clrscr();
printf("\nPrime no. from 1 to 100 are\n \n");
for(num=1;num<=100;num++)
{
ctr=2;
while(ctr<num)
{
if(num%ctr==0)
break;
else
ctr++;
}
if(ctr==num)
printf("\t%d",num);
}
getch();
return 0;
}

