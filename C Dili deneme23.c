#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number;
	int limit;
	int i;
	int div;
	int digit=0;
	printf("How many digit does your number have:");
	scanf("%d",&limit);
	printf("Enter a number:");
	scanf("%d",&number);
	for(i=1;i<=limit;i++)
	{
		div=10;
			if(i==1)
		{
			digit=number%div;
			printf("%d. digit: %d\n",i,digit);
		}
		else
		{
			div=div^i;
			digit=(number%div)/10^(i-1);
			printf("%d. digit = %d\n",i,digit);
		}
			
	}
	
	return 0;
}
