#include<stdio.h>
#include<conio.h>
void main()
{
	int x,f=1;
	clrscr();
	printf("\n enter any number:");
	scanf("%d",&x);
	while(x>=1)
	{
		f = f * x;
		x = x - 1;
	}
	printf("\n factorial is :%d",f);
	getch();
}
