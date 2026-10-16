#include<stdio.h>
#include<conio.h>
void main()
{
	int num,sum=0,i;
	clrscr();
	i=1;
	while(i<=10)
	{
		printf("\n enter number%d:",i);
		scanf("%d",&num);
		sum=sum+num;
		i++;
	}
	printf("\n total sum=%d",sum);
	getch();
}
