#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	int fibo(int);
	clrscr();
	printf("Enter range num:");
	scanf("%d",&n);
	printf("\nFibonacci Series:");
	for(i=0;i<=n;i++)
	{
		printf("%d ",fibo(i));
	}
	getch();
}
int fibo(int i)
{
	if(i==0||i==1)
	{
		return i;
	}
	return fibo(i-1)+fibo(i-2);
}