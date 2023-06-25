#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
int main(int argc, char *argv[]) {
	int *p;
	int N,i;
	printf("Enter a value for N:");
	scanf("%d",&N);
	p=(int*)malloc(N*sizeof(int));
	for(i=0;i<N;i++){
		printf("%d. number:",i+1);
		scanf("%d",&(*(p+i)));
	}
	for(i=0;i<N;i++){
		printf("%d\n",*(p+i));
	}
	return 0;
}*/




int main(int argc, char *argv[]) {
	int *p;
	int N,i;
	printf("Enter a value foR N:");
	scanf("%d",&N);
	p=(int*)malloc(N*sizeof(int));
	srand(time(0));
	printf("Produced Numbers:\n");
	for(i=0;i<N;i++){
		*(p+i)=rand()%100;
		printf("%d\n",*(p+i));
	}
	printf("\nSquare\n");
	for(i=0;i<N;i++){
		printf("%d\n",(*(p+i))*(*(p+i)));	
	}
	return 0;
}
