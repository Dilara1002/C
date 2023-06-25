#include <stdio.h>
#include <stdlib.h>
#define D 12
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,n;
	int d[D][D];
	printf("How many column matrix do you want:");
	scanf("%d",&n);
	printf("\n\np");
	for(i=0;i<n;i++)
	{
		printf("%4d",i);
	}
	printf("\nn\n");
	for(i=0;i<=n;i++)
	{
		printf("----");
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		d[i][i]=1;
		d[i][0]=1;
		for(j=1;j<i;j++)
		{
			d[i][j]=d[i-1][j]+d[i-1][j-1];
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d --",i);
		for(j=0;j<=i;j++)
		{
			printf("%4d",d[i][j]);
		}
		printf("\n");
	}
	return 0;
}
