#include<stdio.h>
#include<conio.h>
void main()
{
	float radius,area;
	clrscr();
	printf("enter the radius of circle:");
	scanf("%f",&radius);
	area=3.14159 * radius * radius;
	printf("the area of the circle of %2f\n",area);
	getch();
}