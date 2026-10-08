#include<stdio.h>
#include<conio.h>
void  main()
{
	int x,y,result=1,i;
	clrscr();

	printf("\n enter x:");
	scanf("%d",&x);

	printf("\n enter y:");
	scanf("%d",&y);

	for(i=1;i<=y;i++)
	{
		result=result*x;
	}
	printf("\n result=%d",result);
	getch();
}

