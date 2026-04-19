#include<stdio.h>
#include<conio.h>
#define max 10
struct stud
{
	int r,p;
	char n[15];
};
void main()
{
	int op,f=1,n=0;
	struct stud s[max];
	struct stud addnewf();
	void searchbyrollf();
	void showallf(struct stud[]);
	void savef(struct stud[]);
	void loadf();
	clrscr();
	while(f==1)
	{
		printf("\nwelcome to sms\n1.for add a new student\n2.for show all\n3.for search by roll\n4.for save data\n5.for load data\n6.for endloop\nEnter:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				s[n]=addnewf();
				n++;
				break;
			case 2:
				showallf(s);
				break;
			case 3:
				searchbyrollf();
				break;
			case 4:
				savef(s);
				break;
			case 5:
				loadf();
				break;
			case 6:
				f=0;
				clrscr();
				printf("\nClick enter");
				break;
			default:
				printf("\nenter valied option");
		}
	}
	getch();
}
struct stud addnewf()
{
	struct stud s1;
	printf("\nEnter name:");
	scanf("%s",s1.n);
	printf("Enter roll no:");
	scanf("%d",&s1.r);
	printf("Enter percentage:");
	scanf("%d",&s1.p);
	return s1;
}
void showallf(struct stud s1[])
{
	int i;
	printf("\nName\tRoll\tPer");
	for(i=0;s1[i].r!='\0';i++)
	{
		printf("\n%s\t%d\t%d",s1[i].n,s1[i].r,s1[i].p);
	}
}
void searchbyrollf()
{
	FILE *fp;
	int r,i,tp1,c=0,tp;
	printf("\nEnter roll no to search:");
	scanf("%d",&r);
	fp=fopen("c:\\sms\\data.txt","r");
	while(fscanf(fp,"%*s%d%*d",tp)!=EOF)
	{
		fscanf(fp,"%*s%d%*d",&tp1);
		{
			if(tp1==r)
			{
				c=1;
				break;
			}
		}
	}
	fclose(fp);
	if(c==1)
	{
		printf("\nstudent found");
	}
	else
	{
		printf("\nstudent not found");
	}
}
void savef(struct stud s3[])
{
	FILE *fp;
	int i;
	fp=fopen("c:\\sms\\data.txt","a");
	for(i=0;s3[i].r!='\0';i++)
	{
		fprintf(fp,"%s\t%d\t%d\n",s3[i].n,s3[i].r,s3[i].p);
	}
	fclose(fp);
}
void loadf()
{
	FILE *fp;
	struct stud s1;
	fp=fopen("c:\\sms\\data.txt","r");
	printf("\nName\tRoll\tPer");
	while(fscanf(fp,"%s %d %d",s1.n,&s1.r,&s1.p)!=EOF)
	{
		printf("\n%s\t%d\t%d",s1.n,s1.r,s1.p);
	}
	fclose(fp);
}