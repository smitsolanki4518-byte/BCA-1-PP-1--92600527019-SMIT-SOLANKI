#include<stdio.h>
#include<conio.h>
void main()
{
	int num,sum=0,i;
	clrscr();
	for(i=1;i<=10;i++)
	{
		printf("\n enter number%d:",i);
		scanf("%d",&num);
		sum=sum+num;
	}
	printf("\n total sum=%d",sum);
	getch();
}
