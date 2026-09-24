#include<stdio.h>
#include<conio.h>
void main()
{
	int rno,s1,s2,s3,s4,s5,total;
	float per;
	clrscr();
	printf("\n enter your rollno :");
	scanf("%d",&rno);

	printf("\n enter five subjects name:");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

	total = s1+s2+s3+s4+s5;
	per = total/5;
	printf("\n total is%d",total);
	printf("\n per is%f",per);
	if(s1 >=35 && s2>=35 && s3>=35 && s4>=35 && s5>=35)

	{
		printf("\n result:pass");
	}
	else
	{
		printf("\n result:fail");
	}
	if(per >=70 && per <=100)
	{
		printf("\n distrinction");
	}
	else if(per >=60)
	{
		printf("\n first class");
	}
	else if(per >=50)
	{
		printf("\n second class");
	}
	else if(per >=35)
	{
		printf("\n pass class");
	}
	else
	{
		printf("\n **********");
	}
	getch();
}