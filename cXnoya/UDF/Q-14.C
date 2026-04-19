#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10],b[10];
	void strcat1(char[],char[]);
	clrscr();
	printf("Enter first str:");
	scanf("%s",a);
	printf("Enter second str:");
	scanf("%s",b);
	strcat1(a,b);
	getch();
}
void strcat1(char a1[],char b1[])
{
	int i,len_a=0;
	char c1[20];

	for(i=0;a1[i]!='\0';i++)
	{
		c1[i]=a1[i];
		len_a++;
	}
	for(i=0;i<10;i++)
	{
	       c1[i+len_a]=b1[i];

	}
	printf("\ncombine str is:%s",c1);
}