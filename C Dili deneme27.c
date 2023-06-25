#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	/*if(n>0)
	{
		if(n%13==0 || n%17==0)
		{
			printf("Searched Number:%d",n);
		}
		else
		{
			printf("It is not a searched number");
		}
	}
	else if(n<=0)
	{
		printf("We are searching positive number.Try again");
	}*/
	if(n>0)
	{
		if(n%13==0 && n%17==0)
		{
			printf("%d can divided with both",n);
		}
		else if(n%13==0 && n%17!=0)
		{
			printf("%d can just divided with 13",n);
		}
		else if(n%13!=0 && n%17==0)
		{
			printf("%d can just divided with 17",n);
		}
		else if(n%13!=0 && n%17!=0)
		{
			printf("%d cannot divided with both",n);
		}
	}
	else
	{
		printf("%d is not a divisible by these numbers.Try again",n);
	}
	
	return 0;
}
