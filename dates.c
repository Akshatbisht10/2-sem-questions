#include<stdio.h>

struct date {
int date;
int month;
int year;
};



void main()
{
int i;

struct date b,a;
	printf("!!!!!!!!entry for the first date!!!!!!!\n");
	printf("enter the date:-");
	scanf("%d",&b.date);
	printf("enter the month:-");
	scanf("%d",&b.month);
	printf("enter the year:-");
	scanf("%d",&b.year);
	
	printf("\n");
	
	printf("!!!!!!!!entry for the second date!!!!!!!\n");
	printf("enter the date:-");
	scanf("%d",&a.date);
	printf("enter the month:-");
	scanf("%d",&a.month);
	printf("enter the year:-");
	scanf("%d",&a.year);
	
if (a.date==b.date && a.month==b.month && a.year==b.year)
printf("same dates\n");

else
printf("different dates\n");
}
