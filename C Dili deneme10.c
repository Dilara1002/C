#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	char j;
	char name;
	for(i='a';i<='z';i++)
	{
		printf("%c ",i);
	}
	printf("Enter your name:");
	scanf("%c",&name);
	
	return 0;
}
