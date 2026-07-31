#include<stdio.h>
#include<conio.h>
void main()
{
	int num1, num2, num3, largest;
	clrscr();

	printf("enter three numbers:");
	scanf("%d %d %d",&num1,&num2,&num3);

	if (num1 >= num2 && num1 >= num3)
	{
		largest = num1;

	}
	else
	{
		largest = (num2 > num3) ? num2: num3;
	}
		printf("largest number is:%d\n",largest);
	getch();
}