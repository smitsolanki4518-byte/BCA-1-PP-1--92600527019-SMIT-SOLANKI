#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();
	printf("\n enter value of x:");
	scanf("%d",&x);
	printf("\n enter value of y:");
	scanf("%d",&y);
	printf("\n before swapping :x=%d,y=%d",x,y);
	x=x+y;
	y=x-y;
	x=x-y;

	printf("\n after swapping :x=%d,y=%d",x,y);
	getch();
}