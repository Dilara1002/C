#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*int f(int n)
{
	if(n%2!=0)
	{
		return 0;
	}
	else if(n%2==0)
	{
		return 1;
	}
	
}
int main(int argc, char *argv[]) {
	int n;
	int result;
	printf("Enter a number:");
	scanf("%d",&n);
	result=f(n);
	if(result==0)
	{
		printf("%d is odd",n);
	}
	else if(result==1)
	{
		printf("%d is even",n);
	}
	
	return 0;
}*/


int f(int n)
{
	return n%2;
	
}
int main(int argc, char *argv[]) {
	int n;
	int result;
	printf("Enter a number:");
	scanf("%d",&n);
	result=f(n);
	if(result==1)
	{
		printf("%d is odd",n);
	}
	else if(result==0)
	{
		printf("%d is even",n);
	}
	
	return 0;
}
