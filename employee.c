#include<stdio.h>

struct employee {
char name[20];
int sales;
};

void main(){
int i;
float sum;
struct employee b[4];
for (i=0; i<3;i++)
{
	printf("!!!!!!!!entry for the %d employee!!!!!!!\n",i+1);
	printf("enter the employee name:-");
	gets(b[i].name);
	printf("enter the price:-");
	scanf("%d",&b[i].sales);
	getchar();

}

for (i=0;i<3;i++)
{
	sum+=b[i].sales;
}

printf ("the sum of all sales:-%f\n",sum);
printf("average of sales:-%f\n",sum/3);
}
