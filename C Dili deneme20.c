#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*float x;
	printf("Enter a value for x:");
	scanf("%f",&x);
	printf(">>f(%.3f) = %.3f",x,x*x*x + 13*x*x + 47*x + 5);*/
	/*int x,y;
	int sign;
	printf("Enter a number for x:");
	scanf("%d",&x);
	printf("Enter a number for y:");
	scanf("%d",&y);
	sign=x*y;
	if(sign>0)
	{
		printf(">>sign(%d*%d)= +1",x,y);
	}
	if(sign<0)
	{
		printf(">>sign(%d*%d)= -1",x,y);
	}
	if(sign==0)
	{
		printf(">>sign(%d*%d)= 0",x,y);
	}*/
	int x,y;
	printf("Enter a number for x:");
	scanf("%d",&x);
	printf("Enter a number for y:");
	scanf("%d",&y);
	if(x>0 && y>0)
	{
		printf(">>sign(%d*%d)= +1",x,y);
	}
	else if(x<0 || y<0)
	{
		printf(">>sign(%d*%d)= -1",x,y);
	}
	else if(x==0 || y==0)
	{
		printf(">>sign(%d*%d)= 0",x,y);
	}
	return 0;
}
