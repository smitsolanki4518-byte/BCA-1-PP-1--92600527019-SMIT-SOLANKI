#include<stdio.h>
#include<conio.h>
void main()
{
	long int num,rev=0,lastnum;
	clrscr();
	printf("\n enter any integer:");
	scanf("%ld",&num);

	while(num>0)
	{
		lastnum=num%10;
		rev=(rev*10)+lastnum;
		num =  num/10;
	}
	printf("\n reversed number is :%ld",rev);
	getch();
}