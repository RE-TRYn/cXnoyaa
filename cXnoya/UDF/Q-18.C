#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i;
	void occurrence(int []);
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("Enter element of index %d:",i);
		scanf("%d",&a[i]);
	}
	occurrence(a);
	getch();
}
void occurrence(int a1[])
{
	int i,n,f=0;
	printf("\nEnter number to search:");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(a1[i]==n)
		{
			f++;
		}
	}
	if(f>0)
	{
		printf("\nNum %d found %d times",n,f);
	}
	else
	{
		printf("\nnum %d does not found",n);
	}
}