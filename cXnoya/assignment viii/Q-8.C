#include<stdio.h>
#include<conio.h>
struct employee
{
	int id,sal,nsal,ta,da,pf;
};
void main()
{
	struct employee e[3];
	int i;
	clrscr();
	for(i=0;i<3;i++)
	{
		printf("enter employee 1's info....\n",i+1);
		printf("Enter emid:");
		scanf("%d",&e[i].id);
		printf("enter salary:");
		scanf("%d",&e[i].sal);
		e[i].ta=e[i].sal*10/100;
		e[i].da=e[i].sal*7/100;
		e[i].pf=e[i].sal*12/100;
		e[i].nsal=e[i].sal+e[i].ta+e[i].da-e[i].pf;
	}
	printf("Information is....\nNO\tSalary\tTA(10)\tDA(7)\tPF(12)\tNet Salary\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t%d\t%d\t%d\t%d\t%d\n",e[i].id,e[i].sal,e[i].ta,e[i].da,e[i].pf,e[i].nsal);
	}
	getch();
}