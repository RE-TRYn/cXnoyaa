#include<stdio.h>
#include<conio.h>
void main()
{
	int rec(int,int);
	int n,i=2;
	clrscr();
	printf("Enter a num:");
	scanf("%d",&n);
	if(rec(n,i)==1)
	{
		printf("\nnum is prime num");
	}
	else
	{
		printf("\nnum is not a prime num");
	}
	getch();
}
int rec(int n,int i)
{
	if(n<=2)
	{
		return (n==2);
	}
	if(n%i==0)
	{
		return 0;
	}
	if(i*i>n)
	{
		return 1;
	}
	return rec(n,i+1);
}