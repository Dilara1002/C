#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*int el;
	int area;
	printf("Enter a value for the length of the edge of the square:");
	scanf("%d",&el);
	area=el*el;
	printf("Area:%d",area);*/
	float el;
	float area;
	printf("Enter a value for the length of the edge of the square:");
	scanf("%f",&el);
	area=el*el;
	printf("Area:%.3f",area);
	
	return 0;
}
