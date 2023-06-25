#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void add(int d[], int n,int an,int row)
{
	int i;
	if(row<=n+1)
	{
		for(i=n-1;i>=row-1;i--)
		{
			d[i+1]=d[i];
		}
		d[row-1]=an;
		printf("New Array:\n");
		for(i=0;i<=n;i++)
		{
			printf("%d\n",d[i]);
		}
	}
	else
	{
		printf("Mistake!");
	}
	
}
int main(int argc, char *argv[]) {
	int n,an,row;
	int i;
	printf("Enter a number:");
	scanf("%d",&n);
	int d[n];
	srand(time(0));
	for(i=0;i<n;i++)
	{
		d[i]=rand()%100;
		printf("%d\n",d[i]);
	}
	
	printf("Enter the number what you want to add in the array:");
	scanf("%d",&an);
	printf("Which row would you like to add the number:");
	scanf("%d",&row);
	add(d,n,an,row);
	return 0;
}
