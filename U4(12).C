#include<stdio.h>
#include<conio.h>
void main()
{
	int num,sum=0;
	clrscr();

	printf("enter two number:");
	scanf("%d",&num);
	while(num>0)
	{
		sum=sum+(num%10);
		num=num/10;
	}
	printf("\n sum=%d",sum);
	getch();
}
