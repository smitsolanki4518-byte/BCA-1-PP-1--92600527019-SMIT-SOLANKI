#include<stdio.h>
#include<conio.h>
void main()
{
	int  a,b;
	clrscr();e

	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);

	printf("addition:      %d\n",a+b);
	printf("subtraction:   %d\n",a-b);
	printf("multiplication:%d\n",a*b);
	printf("divison:       %d\n",a/b);
	printf("remainder:     %d\n",a%b);
	getch();
}

