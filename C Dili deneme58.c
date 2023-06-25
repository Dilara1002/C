#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	int multi=1;
	printf("   I");
	for(i=1;i<=10;i++)
	{
		printf("%4d",i);
	}
	printf("\n");
	for(i=1;i<=10;i++)
	{
		printf("----");
	}
	printf("\n");
	for(i=1;i<=10;i++)
	{
		printf("%4d",i);
		for(j=1;j<=10;j++)
		{
			multi=i*j;
			printf("%4d",multi);
		}
		printf("\n");
	}
		return 0;
}
