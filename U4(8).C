#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a=0,b=1,next,i;
	clrscr();
	printf("\n enter number of terms:");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("\n %d",a);
		next=a+b;
		a=b;
		b=next;
	}
	getch();
}