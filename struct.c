#include<stdio.h>

struct books {
char bname[20];
float bprice;
char author[20];
};

struct student {
char sname[20];
int rno;
char sec; 
};

void main()
{
int i;
struct books b[5];
for (i=0; i<2;i++)
{
	printf("!!!!!!!!entry for the %d book!!!!!!!\n",i+1);
	printf("enter the book name:-");
	gets(b[i].bname);
	printf("enter the price:-");
	scanf("%f",&b[i].bprice);
	getchar();
	printf("enter the author name:-");
	gets(b[i].author);
}

struct student s[5];
for (i=0; i<2;i++)
{
	printf("!!!!!!!!entry for the %d student!!!!!!!\n",i+1);
	printf("enter the student name:-");
	gets(s[i].sname);
	printf("enter the roll no:-");
	scanf("%d",&s[i].rno);
	getchar();
	printf("enter the setion:-");
	s[i].sec=getchar();
	getchar();
}

printf ("---------the entries of all books are---------\n");
for (i=0; i<2;i++)
{
	printf("%s %f %s\n",b[i].bname,b[i].bprice,b[i].author);
}

printf ("--------the entries of all students are--------\n");
for (i=0; i<2;i++)
{
	printf("%s %d %c\n",s[i].sname,s[i].rno,s[i].sec);
}
}
