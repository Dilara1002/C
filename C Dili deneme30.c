#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*int n;
	double result=0;
	do
	{
		printf("Enter a positive value for n:\n");
		scanf("%d",&n);
		if(n<0)
		{
			printf("Enter a positive value for n:\n");
		}
		if(n<0)continue;
		result=sqrt(n);
		printf("Squareroot Result:%.2lf\n",result);
	}
	while(n);*/
	int x,y;
	int multi;
	printf("Enter a number for x:");
	scanf("%d",&x);
	printf("Enter a number for y:");
	scanf("%d",&y);
	multi=x*y;
	if(x==0 || y==0)
	{
		multi=0;
		printf("Result:%d",multi);
	}
	else if(x>0 && y>0 || x<0 && y<0)
	{
		multi>0;
		printf("Result:%d",multi);
	}
	else if(x>0 || y>0 || x<0 || y<0)
	{
		multi<0;
		printf("Result:%d",multi);
	}

	return 0;
}
