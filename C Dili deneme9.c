#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	/*printf("Even Numbers");
	for(i=0;i<=50;i=i+2)
	{
		if(i==40)
		{
			break;
		}
		else if(i==30)
		{
			continue;
		}
		printf("%d\n",i);
	}*/

	/*i=0;
	while(i<=200)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	
		i++;		
	}*/
	int j;
	i=10;
	j=10;
	do
	{
		printf("%d\n",i);
		i++;
		
	}
	while(i>=100);
	do
	{
		printf("%d\n",j);
		j++;
		
	}
	while(j<=100);


	return 0;
}
