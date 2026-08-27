#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();

	printf("\n enter the number x");
	scanf("%d",&x);

	printf("\n enter the number y");
	scanf("%d",&y);

	if(y==0)
	{
		printf("\n division by zero is not possible");
	}
	else if(x%y==0)
	{
		printf("\n %d is divisible by %d",x,y);
	}
	else
	{
		printf("\n %d is not divisible by %d",x,y);

	}
	getch();
}
