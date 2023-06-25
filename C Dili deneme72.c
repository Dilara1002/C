#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*int Area(int e){
	return e*e;
}
int main(int argc, char *argv[]) {
	int edge,A;
	printf("Enter an edge for square:");
	scanf("%d",&edge);
	A=Area(edge);
	printf("Area Of Square:%d",A);
	return 0;
}*/

/*float Avg(int sum){
	return (float)sum/5;
	
}
int main(int argc, char *argv[]) {
	int s[5];
	int i,sum=0;
	float A;
	for(i=0;i<5;i++){
		printf("Enter %d. number:",i+1);
		scanf("%d",&s[i]);
		sum+=s[i];
	}
	printf("%d\n",sum);
	A=Avg(sum);
	printf("Average:%.2f\n",A);
	
	return 0;
}*/


/*int control(int num){
	if(num%2==0){
		printf("%d is an even number",num);
	}
	else{
		printf("%d is an odd nymber",num);
	}
}
int main(int argc, char *argv[]) {
	int number;
	printf("Enter a number:");
	scanf("%d",&number);
	control(number);
	return 0;
}*/

void asal(int n){
	int i;
	for(i=2;i<n;i++){
		if(n/i!=0)
			printf("%d asaldir",n);
	}
}
void armstrong(int n){
	
}
int main(int argc, char *argv[]) {
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	asal(n);
	armstrong(n);
	return 0;
}
