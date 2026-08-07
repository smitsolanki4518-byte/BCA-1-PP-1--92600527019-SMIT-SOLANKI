
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	printf("\n enter value of three :");
	scanf("%d%d",&x,&y,&z);
	if(x==y)
	{
		printf("\n botha are same:");

	}
	else
	{
		printf("\n both are not equal:");
		if(x>y)
		{
			printf("\n x is max");
			z=x*x;
			printf("\n square is: %d",x*x);
		}
		else
		{
			printf("\n y is max");
			z=y*y;
			printf("\n square is :%d",y*y);

			
		}
	}
	getch();
}
