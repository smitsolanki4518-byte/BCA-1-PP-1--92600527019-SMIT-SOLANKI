#include<stdio.h>
#include<conio.h>
void main()
{
	int num,sum = 0;
	clrscr();
	printf(" enter a number:");
	scanf("%d",&num);
	while (num > 0)
	{
		sum += num % 10;
		num /=10;
	}
	printf("\n sum of digits=%d",sum);
	getch();
}