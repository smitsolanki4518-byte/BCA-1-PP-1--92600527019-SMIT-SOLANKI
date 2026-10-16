#include<stdio.h>
#include<conio.h>
void main()
{
	int n1=0,n2=1,s,N;
	clrscr();
	s=n1+n2;
	printf("\n enter any number:",N);
	scanf("%d",&N);

	printf("\n %d %d %d",n1,n2,s);
	while(s<=N)
	{
		n1=n2;
		n2=s;
		s=n1+n2;
		printf("\n %d",s);
	}
	getch();
}