#include<stdio.h>
#include<conio.h>
void main()
{
	int j;
	clrscr();
	j=1;
	while(j<=10)
	{
		printf(" %d %d",j,11-j);
		j++;
	}
	getch();
}