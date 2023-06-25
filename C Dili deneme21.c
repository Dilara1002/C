#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0;
	int l=0;
	int r=1000;
	while(i<=r)
	{
		if(i%17==0)
		{
			printf("%4d",i);
			l++;
			if(l%10==0)
			{
				printf("\n");
			}
		}
		
		i++;
	}
	return 0;
}
