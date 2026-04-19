#include<stdio.h>
#include<conio.h>
struct marksheet
{
	int marks[7];
	int roll,total;
	float percentage;
};
void main()
{
	struct marksheet s[3];
	int i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		s[i].total=0;
	}
	for(i=0;i<3;i++)
	{
	printf("enter student 1's info...\n");
	printf("Enter roll no:");
	scanf("%d",&s[i].roll);
	for(j=0;j<7;j++)
	{
		printf("enter marks %d:",j);
		scanf("%d",&s[i].marks[j]);
		s[i].total+=s[i].marks[j];
	}
	s[i].percentage=s[i].total/7;
	}
	printf("Info is....\n");
	printf("Roll no\tTotal\tPercentage");
	for(i=0;i<3;i++)
	{
	printf("\n%d\t%d\t%.2f",s[i].roll,s[i].total,s[i].percentage);
	}
	getch();
}