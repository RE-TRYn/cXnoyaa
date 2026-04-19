#include<stdio.h>
#include<conio.h>
void main()
{
	int marks[7],i,tot;
	float per;
	int total(int[]);
	float percentage(int);
	void grade(int,float,int[]);
	clrscr();
	for(i=0;i<7;i++)
	{
		printf("enter marks of index %d:",i);
		scanf("%d",&marks[i]);
	}
	tot=total(marks);
	per=percentage(tot);
	grade(tot,per,marks);
	getch();
}
int total(int m1[])
{
	int i,t=0;
	for(i=0;i<7;i++)
	{
		t=t+m1[i];
	}
	return t;
}
float percentage(int t2)
{
	float per;
	per=t2/7;
	return per;
}
void grade(int t3,float p3,int m3[])
{
	int i,f=0;
	for(i=0;i<7;i++)
	{
		if(m3[i]<40)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("\nStudent is fail");
	}
	else
	{
		printf("\nTotal is %d",t3);
		printf("\nPercentage is %.2f",p3);
		if(p3>80)
		{
			printf("\nGrade is A");
		}
		else if(p3>70)
		{
			printf("\nGrade is B");
		}
		else if(p3>60)
		{
			printf("\nGrade is C");
		}
		else if(p3>50)
		{
			printf("\nGrade is D");
		}
		else if(p3>40)
		{
			printf("\nGrade is E");
		}
	}
}
