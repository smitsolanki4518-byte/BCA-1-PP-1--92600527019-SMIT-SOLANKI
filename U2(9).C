#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("\n enter two number:");
	scanf("%d %d %d",&a,&b);
	printf("\n before swapping:a=%d,b=%d",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("\n after swaping:a=%d,b=%d",a,b);
	getch();
}