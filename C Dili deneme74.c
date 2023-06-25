#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//1
/*struct competitorType{
	char name[10],surname[10];
	float rating[10],performance;
};
float calculateScore(struct competitorType s){
	int i;
	float result=0,max=0.0,min=6.0;
	for(i=0;i<10;i++){
		if(s.rating[i]>max){
			max=s.rating[i];
		}
		else if(s.rating[i]<min){
			min=s.rating[i];
		}
		result+=s.rating[i];
	}
	result=(result-max-min)/8;
	return (result);
}
int main(int argc, char *argv[]) {
	int i;
	struct competitorType skater;
	printf("Name:");
	scanf("%s",&skater.name);
	printf("Surname:");
	scanf("%s",&skater.surname);
	printf("Enter the rating of refree: ");
	for(i=0;i<10;i++){
		scanf("%f",&skater.rating[i]);
	}
	skater.performance=calculateScore(skater);
	printf("Performance Score: %.2f",skater.performance);
	return 0;
}*/



//2

struct competitorType{
	char name[10],surname[10];
	float rating[10],performance;
};
float calculateScore(struct competitorType s){
	int i;
	float result=0,max=0.0,min=6.0;
	for(i=0;i<10;i++){
		if(s.rating[i]>max){
			max=s.rating[i];
		}
		else if(s.rating[i]<min){
			min=s.rating[i];
		}
		result+=s.rating[i];
	}
	result=(result-max-min)/8;
	return (result);
}

int main(int argc, char *argv[]) {
	struct competitorType skater[100];
	int n,i,j;
	float max=0.0;
	int first;
	printf("Enter the number of skater:");
	scanf("%d",&n);
	for(j=0;j<n;j++){
		printf("\nName:");
		scanf("%s",&skater[j].name);
		printf("\nSurname:");
		scanf("%s",&skater[j].surname);
		printf("\nEnter the rating of refree:\n ");
		for(i=0;i<10;i++){
			scanf("%f",&skater[j].rating[i]);
		}
		skater[j].performance=calculateScore(skater[j]);
		
		printf("Score:%.2f",skater[j].performance);
		if(skater[j].performance>max){
			max=skater[j].performance;
			first=j;
		}
		
	}
	printf("The First Compatitor:\n");
	printf("Name:%s Surname: %s Rating:%.2f",skater[first].name,skater[first].surname,max );
	
	
	
	return 0;
}
