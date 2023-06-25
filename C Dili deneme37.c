#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*void oddoreven(int number)
{
	if(number%2==0)
	{
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}
}
int main(int argc, char *argv[]) {
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	oddoreven(num);
	return 0;
}*/
int oddoreven(int number)
{
	if(number%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main(int argc, char *argv[]) {
	int num;
	int result;
	printf("Enter a number:");
	scanf("%d",&num);
	result=oddoreven(num);
	if(result==1)
	{
		printf("The number is even");
	}
	else if(result==0)
	{
		printf("The number is odd");
	}
	return 0;
}
