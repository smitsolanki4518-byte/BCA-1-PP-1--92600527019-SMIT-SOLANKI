#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();
	printf("\n  enter any character:");
	scanf("%d",ch);
	if(ch>=65 && ch<=90)
	{
		printf("\n char is uppercase:");
	}
	else if (ch>=97 && ch<=122)
	{
		printf("\n char is lowercase:");
	}
	else
	{
		printf("\n input is not valid char:");
	}
	getch();
}