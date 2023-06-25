#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int max(int D[],int n)
{
	int i,max=0;
	max=D[0];
	for(i=0;i<n;i++)
	{
		
		if(D[i]>max)
		{
			max=D[i];
		}
		
	}
	return max;
}
int min(int D[],int n)
{
	int i,min=0;
	min=D[0];
	for(i=0;i<n;i++)
	{
		
		if(D[i]<min)
		{
			min=D[i];
		}
		
	}
	return min;
}
int main(int argc, char *argv[]) {
	int n;
	int maximum,minimum;
	printf("Enter  a number for n:");
	scanf("%d",&n);
	int D[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d. number:",i+1);
		scanf("%d",&D[i]);
	}
	maximum=max(D,n);
	printf("Maximum Number:%d\n",maximum);
	minimum=min(D,n);
	printf("Minimum Number:%d\n",minimum);
	return 0;
}
