#include<stdio.h>
#include<conio.h>
void main()
{
	char x;
	clrscr();
	printf("n enter any capital letter:");
	scanf("%c",&x);
	printf("\n small letter %c",x+32);

	getch();
}