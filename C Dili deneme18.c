#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	printf("Enter a number for x:");
	scanf("%d",&x);
	printf("Enter a number for y:");
	scanf("%d",&y);
	/*if(x>y)
	{
		/*printf("x is bigger than y");*/
		/*printf("%d is bigger than %d",x,y);
	}
	else if(y>x)
	{
		/*printf("y is bigger rhan x");*/
		/*printf("%d is bigger than %d",y,x);
	}
	else
	{*/
		/*printf("x and y are equal to each other");*/
		/*printf("%d and %d are equal to each other",x,y);
	}*/
	if(y%x==0)
	{
		printf("y is a multiple of x");
	}
	else
	{
		printf("y is not a multiple of x");
	}
	return 0;
}
