#include<stdio.h>
#include<conio.h>
void main()
{
	float num1,num2;
	clrscr();
	printf("\ enter two numbers:");
	scanf("%f%f",&num1,&num2);
	if(num1>num2)
	{
		printf("\n maximum value is:%.2f",num1);
	}
	else if(num2>num1)
	{
		printf("\n maximum value is:%.2f",num2);
	}
	else
	{
		printf("\n both numbers are equal.");
	}
	getch();
}