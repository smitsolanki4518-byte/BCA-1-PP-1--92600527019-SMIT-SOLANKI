#include<stdio.h>
#include<conio.h>
void main()
{
	 int n,i;
	 int a = 0, b = 1, c;
	 clrscr();
	 printf("\n enter number of terms:");
	 scanf("%d",&n);

	 printf("\n fibonacci series:");
	 for (i = 1; i <=n; i++)
	 {
		printf("%d",a);
		c= a+b;
		a =b;
		b=c;
	 }
	 getch();
}