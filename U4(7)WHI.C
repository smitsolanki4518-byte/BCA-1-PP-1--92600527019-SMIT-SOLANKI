#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i;
	clrscr();
	printf("\n enter a number:");
	scanf("%d",&num);

	printf("\n multiplication table of %d",num);
	i=1;
	while(i<=10)
	{
		printf("\n %d * %d = %d",num,i,num*i);
		i++;
	}
	getch();
}