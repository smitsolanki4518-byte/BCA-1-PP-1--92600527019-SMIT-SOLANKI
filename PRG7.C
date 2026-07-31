#include<stdio.h>
#include<conio.h>
void main()
{
	float pa,r,y,si;
	clrscr();
	printf("\n enter value of pa:");
	scanf("%f", &pa);
	printf("\n enter value of r:");
	scanf("%f",&r);
	printf("\n enter value of y:");
	scanf("%f",&y);

	si = (pa * r * y) / 100;

	printf("\n ******************** \n ");
	printf("\n pa :%.2f",pa);
	printf("\n r :%.2f",r);
	printf("\n y    :%.2f",y);
	printf("\n ******************** \n");
	printf("\n Simple interest :%. 2f",si);
	getch();
}