#include<stdio.h>
#include<conio.h>
void main()
{
	float salary,hra,ta,da,pf,gross_salary;
	clrscr();
	printf("\n enter the basic salary:");
	scanf("%f",&salary);

	printf("\n enter the hra:");
	scanf("%f",&hra);

	printf("\n enter the ta:");
	scanf("%f",&ta);

	printf("\n enter the da:");
	scanf("%f",&da);

	printf("\n enter the pf:");
	scanf("%f",&pf);

	printf("\n enter the gross_ salary:");
	scanf("%f",&gross_salary);




		gross_salary= salary + hra + ta + da - pf;

		printf("\n------ salary datails------");
		printf("\n HRA:%.2f",hra);
		printf("\n TA :%.2f",ta);
		printf("\n DA:%.2f",da);
		printf("\n PF:%.2f",pf);
		printf("\n------------------------\n");
		printf("\n gross salary:%.2f",gross_salary);
		getch();
}