#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*float x,y,z;
	float avg;
	printf("Enter a number for x:");
	scanf("%f",&x);
	printf("Enter a number for y:");
	scanf("%f",&y);
	printf("Enter a number for z:");
	scanf("%f",&z);
	avg=(x+y+z)/3;
	printf("Average:%.2f",avg);*/
	int N;
	int i;
	int avg;
	int sum=0;
	printf("Enter a value for N:");
	scanf("%d",&N);
	srand(time(NULL));
	for(i=0;i<N;i++)
	{
		
		printf("%d\n",rand()%100);
		
	}
	for(i=0;i<N;i++)
	{
		sum=sum+rand()%100;
		printf("Sum of numbers:%d\n",sum);
	}
	
		avg=sum/N;
	printf("Average:%d",avg);
	

	return 0;
}
