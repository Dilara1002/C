#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//1
/*
typedef struct Address_Noting{
	char Name[100];
	char Surname[100];
	char Phone[10];
	char Adress[500];
}noting;
int main(int argc, char *argv[]) {
	int n;
	int i;
	char l;
	printf("How many registration will keep?:");
	scanf("%d",&n);
	scanf("%c",&l);
	noting comunication[n];
	for(i=0;i<n;i++){
		printf("Enter name:");
		gets(comunication[i].Name);
		
		printf("Enter surname:");
		gets(comunication[i].Surname);
		
		printf("Enter phone:");
		gets(comunication[i].Phone);
		
		printf("Enter address:");
		gets(comunication[i].Adress);
	}
	printf("\n\n-------------NoteBook------------\n\n");
	for(i=0;i<n;i++){
		printf("%s\t %s\t %s\t %s\t\n",comunication[i].Name,comunication[i].Surname,comunication[i].Phone,comunication[i].Adress);
	}
	return 0;
}*/
typedef struct employee{
	int password;
	char name[10];
	char surname[10];
	char genter[10];
	int salary;
	int age;
	
	
}people;

int sorting1(people x[], int k){
	int i,j;
	people t;
	for(i=0;i<k-1;i++){
		for(j=1;j<k;j++){
			if(strcmp(x[i].name,x[j].name)){
				t=x[i];
				x[i]=x[j];
				x[j]=t;
			}
		}
	}
	
}

int list(people x[],int k){
	int i;
	printf("\n\n******************Alphabetical Order***********************\n\n");
	for(i=0;i<k;i++)
	printf("%d\t %s\t %s\t %s\t %d\t %d\t\n",x[i].password,x[i].name,x[i].surname,x[i].genter,x[i].salary,x[i].age);
}
int main(int argc, char *argv[]) {
	int n,i;
	printf("How many employees are there?:");
	scanf("%d",&n);
	people p[n];
	for(i=0;i<n;i++){
	printf("Enter the password:");
	scanf("%d",&p[i].password);
	
	printf("Enter name:");
	scanf("%s",&p[i].name);
	
	printf("Enter surname:");
	scanf("%s",&p[i].surname);
	
	printf("Enter a genter:");
	scanf("%s",&p[i].genter);
	
	printf("Enter salary:");
	scanf("%d",&p[i].salary);
	
	printf("Enter age:");
	scanf("%d",&p[i].age);
	}
	
	
	sorting1(p,n);
	list(p,n);

	return 0;
}
