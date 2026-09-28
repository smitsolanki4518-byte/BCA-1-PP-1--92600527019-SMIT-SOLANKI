#include<stdio.h>
#include<conio.h>
void main()
{
	double number;
	clrscr();
	printf("\n enter any number:");
	scanf("%d",&number);

	(number>0)? printf("\n the number is positive:"):
	(number<0)? printf("\n the number is nagative:"):
		printf("\n the number is zero:");
	getch();
}