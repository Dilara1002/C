#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//printf("\n\nName:%s\nSurname:%s\nStudent Number:%d\nGrade:%d\n",stn.name,stn.surname,stn.number,stn.grade);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct student{
	char name[10];
	char surname[10];
	int number;
	int grade;
};
int main(int argc, char *argv[]) {
	struct student stn;
	
		printf("Enter student number:");
		scanf("%d",&stn.number);
		if(stn.number==1358){
		stn.number=1358;
		strcpy(stn.name,"Dilara");
		strcpy(stn.surname,"Sumer");
		stn.grade=11;
		printf("\n\nName:%s\n",stn.name);
		printf("\n\nSurname:%s\n",stn.surname);
		printf("\n\nStudent Number:%d\n",stn.number);
		printf("\n\nGrade:%d\n",stn.grade);
	}
	

	return 0;
}
