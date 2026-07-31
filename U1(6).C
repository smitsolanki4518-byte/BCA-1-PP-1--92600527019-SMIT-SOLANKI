#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	printf("enter value of x:");
	scanf("%d",&x);

	printf("enter value of y:");
	scanf("%d",&y);
	printf("\n before interchange: x=%d  y=%d",x,y);

	z=x;
	x=y;
	y=z;
	printf("\n After interchange : x=%d  y=%d",x,y);
	getch();
}
