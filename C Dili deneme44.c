#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int f(int x,int y)
{
	if(x>y)
	{
		return 1;
	}
	else if(y>x)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}
int main(int argc, char *argv[]) {
	int x,y;
	int result;
	printf("Enter a number for x:");
	scanf("%d",&x);
	printf("Enter a number for y:");
	scanf("%d",&y);
	result=f(x,y);
	if(result==1)
	{
		printf("%d is bigger than %d",x,y);
	}
	else if(result==0)
	{
		printf("%d is bigger than %d",y,x);
	}
	else if(result==-1)
	{
		printf("%d and %d are equal to each other",x,y);
	}
	return 0;
}
