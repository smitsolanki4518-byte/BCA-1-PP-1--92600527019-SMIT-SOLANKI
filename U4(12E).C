#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,s=0;
	clrscr();
	printf("\n enter any number:");
	scanf("%d",&x);
	while(x>0)
	{
		y = x % 10;
		s = s + y;
		x = x / 10;
	}
	printf("\n sum is :%d",s);
	getch();
}