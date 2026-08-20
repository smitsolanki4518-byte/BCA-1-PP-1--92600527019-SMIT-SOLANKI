#include<stdio.h>
#include<conio.h>
void main()
{
	float salary,hra,ta,da,pf,gross_salary;
	clrscr();
	printf("\n enter the basic salary:");
	scanf("%f",&salary);
	if(salary>=5000)
	{
		hra= salary * 0.05/100;
		ta = salary * 0.06/100;
		da = salary * 0.04/100;
		pf = salary * 0.05/100;
	}
	else
	{
		hra = salary * 0.04/100;
		ta = salary * 0.05/100;
		da = salary * 0.03/100;
		pf = salary * 0.04/100;
	}
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




