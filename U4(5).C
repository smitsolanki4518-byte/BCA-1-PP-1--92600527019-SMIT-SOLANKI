
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();


	for(i=200;i>=180;i-=2)
	{
		printf(" %d",i);
	}

	printf("\n:");
	printf("\n for while loop:");
	j=200;
	while(j>=180)
	{
		printf("\t %d",j);
		j-=2;
	}


	getch();
}