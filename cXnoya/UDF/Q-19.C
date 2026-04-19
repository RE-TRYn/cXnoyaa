#include<stdio.h>
#include<conio.h>
void main()
{
	char name[10],gen;
	float nsal,sal;
	float netsal(float,char);
	void display1(float,char,char[]);
	clrscr();
	printf("Enter employee name:");
	scanf("%s",name);
	printf("Enter employee grnder:");
	scanf("\n%c",&gen);
	printf("Enter employee salary:");
	scanf("%f",&sal);
	nsal=netsal(sal,gen);
	display1(nsal,gen,name);
	getch();
}
float netsal(float sal1,char gen1)
{
	float nsal1;
	float ta,da,pf;
	if(gen1=='m'|| gen1=='M')
	{
		ta=sal1*5/100;
		da=sal1*5/100;
		pf=sal1*10/100;
		nsal1=sal1+ta+da-pf;

	}
	else if(gen1=='f'||gen1=='F')
	{
		ta=sal1*10/100;
		da=sal1*10/100;
		pf=sal1*10/100;
		nsal1=sal1+ta+da-pf;

	}
	else
	{
		nsal1=0;
	}
	return nsal1;
}
void display1(float nsal1,char gen1,char n1[])
{
	if(nsal1==0)
	{
		printf("\nInvalied gender");
	}
	else
	{
		printf("\nname:%s",n1);
		printf("\nGender:%c",gen1);
		printf("\nNetSalary:%.2f",nsal1);
	}
}
