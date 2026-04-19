#include<stdio.h>
#include<conio.h>
void main()
{
	void check(char);
	char c;
	clrscr();
	printf("enter a char:");
	scanf("\n%c",&c);
	check(c);
	getch();
}
void check(char c)
{
	int ascii=("%d",c);
	if(ascii>=97&&ascii<=122)
	{
		printf("\nChar is lowercase");
	}
	else if(ascii>=65&&ascii<=90)
	{
	       printf("\nChar is upercase");
	}
	else if(ascii>=48&&ascii<=57)
	{
		printf("\nChar is digit");
	}
	else
	{
		printf("\nChar is specialchar");
	}
}