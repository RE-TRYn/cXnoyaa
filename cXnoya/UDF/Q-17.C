#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i;
	void odd(int[]);
	void even(int[]);
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("Enter element of index %d:",i);
		scanf("%d",&a[i]);
	}
	printf("\nall odd numbers:");
	odd(a);
	printf("\nall even numbers:");
	even(a);
	getch();
}
void odd(int a1[])
{
	int i;
	for(i=0;i<10;i++)
	{
		if(a1[i]%2!=0)
		{
			printf("%d ",a1[i]);
		}
	}
}
void even(int a2[])
{
	int i;
	for(i=0;i<10;i++)
	{
		if(a2[i]%2==0)
		{
			printf("%d ",a2[i]);
		}
	}
}