// write a program to display result pass or fail
#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();
	printf("enter of result:");
	scanf("%d",&x);

	if(x>=35)
	{
		printf("\n result is pass:");
	}
	else
	{
		printf("\n result is fail:");


	}
	getch();
}