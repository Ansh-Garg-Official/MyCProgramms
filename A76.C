// Bubble sort Ascending
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[]={7,9,5,3,8,2,20},i,j,swap,flag=0;
clrscr();
printf("\nValue entered = ");
for(i=0;i<sizeof(arr)/2;i++)
printf("\nValue is %d",arr[i]);

printf("\n\n]Sorted value =");
for(i=0;i<(sizeof(arr)/2)-1;i++)
{
	for(j=0;j<(sizeof(arr)/2)-1;j++)
	{
		if(arr[j]>arr[j+1])
		{
		swap=arr[j+1];
		arr[j+1]=arr[j];
		arr[j]=swap;
		flag++;
		}
	  if(!flag)
	  break;
	}
}
for(i=0;i<(sizeof(arr)/2);i++)
printf("\nValue is %d",arr[i]);
getch();
}
