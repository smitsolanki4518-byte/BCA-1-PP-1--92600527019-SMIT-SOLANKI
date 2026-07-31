#include<stdio.h>
#include<conio.h>
void main()
{
	float pa,r,y,si;
	clrscr();
	printf("\n enter pa amount");
	scanf("%f",&pa);

	printf("\n enter r amount");
	scanf("%f",&r);

	printf("\n enter y amount");
	scanf("%f",&y);

	si=(pa * r * y) /100;

	printf("\n  simple interest is %f",si);
	getch();
}

