#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number;
	int i;
	printf("Enter a number:");
	scanf("%d",&number);
	/*i=number;
	while(i!=0)
	{
		printf("%4d",i);
		i--;/*i=i-1*/
	/*}*/
	int sum=0;
	i=1;
	while(i<=number)
	{
		sum=sum+i;
		if(i==number)
		{
			printf("%d = %d",i,sum);
		}
		else
		{
			printf("%d + ",i);
		}
		
		i++;
	}
	/*printf("Summation Of Numbers:%d",sum);*/
	
	
	return 0;
}
