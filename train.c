#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct time
{
	int hours;
	int min;
	int sec;
};

struct date
{
	int day;
	int month;
	int year;
};

struct train {
	char name[100];
	int tno;
	char arrival[50],departure[50];
	struct time at,dt;
	struct date ad,dd;
	};
	

void station(struct train *p,int n){

	char st[20];
	printf("enter the name of departure station to check all trains:-");
	gets(st);
	for(int i=0;i<n;i++){
		if(!(strcmp((p+i)->departure,st))){
			printf("train name :- %s\n",(p+i)->name);
			printf("train no, :- %d\n",(p+i)->tno);
			printf("arrival station:- %s\n",(p+i)->arrival);
			printf("arrival time:- %d %d %d\n",(p+i)->at.hours,(p+i)->at.min,(p+i)->at.sec);
	}
}
}
int main(){
	int n=1 ;

	struct train *p= (struct train *) malloc(n*sizeof(struct train ));
	for (int i=0;i<n;i++){
	
		puts("enter name of train:");
		gets((p+i)->name);
		
		printf("enter train no. :");
		scanf("%d",&(p+i)->tno);
		getchar();
		
		puts("enter arrival station of train:");
		gets((p+i)->arrival);
		
		puts("enter departure station of train:");
		gets((p+i)->departure);
		
		printf("enter the arrival time :");
		scanf("%d %d %d",&(p+i)->at.hours,&(p+i)->at.min,&(p+i)->at.sec);
		getchar();
		
		printf("enter the departure time :");
		scanf("%d %d %d",&(p+i)->dt.hours,&(p+i)->dt.min,&(p+i)->dt.sec);
		getchar();
		
		printf("enter the arrival date :");
		scanf("%d %d %d",&(p+i)->ad.day,&(p+i)->ad.month,&(p+i)->ad.year);
		getchar();
		
		printf("enter the departure date :");
		scanf("%d %d %d",&(p+i)->dd.day,&(p+i)->dd.month,&(p+i)->dd.year);
		getchar();
		
		station(p,n);

	}
	
	
	return 0;
} 
