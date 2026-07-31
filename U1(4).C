#include<stdio.h>
#include<conio.h>
void main()
{
	float num1,num2,num3,average;
	clrscr();e
	printf("enter three numbers:");
	scanf("%f %f %f",&num1, &num2, &num3);

	average = (num1 + num2 + num3) / 3;

	printf("\n average %f",average);
	getch();
}