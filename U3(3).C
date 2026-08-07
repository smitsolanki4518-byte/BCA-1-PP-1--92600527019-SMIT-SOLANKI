#include<stdio.h>
#include<conio.h>
void main()
{
	int x;
	clrscr();
	printf("\n enter of age:");
	scanf("%d",&x);
	if(x>18)
	{
		printf("\n person is eligible:");
	}
	else
	{
		printf("\n person is not eligible:");
	}
	getch();
}