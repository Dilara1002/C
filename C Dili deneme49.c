#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*	void trianglec(int row)
{
	int i,j;
	printf("\n");
	int empty=row-1;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<empty;j++)
		{
			printf(" ");
		}
		empty--;
		for(j=1;j<=2*i-1;j++)
		{
			printf("c");
		}
		printf("\n");
	}
}
void triangleplus(int row)
{
	int i,j;
	int empty=1;
	for(i=1;i<=row-1;i++)
	{
		for(j=1;j<=empty;j++)
		{
			printf(" ");
		}
		empty++;
		for(j=1;j<=2*row-i-1;j++)
		{
			printf("+");
		}
		printf("\n");
	}
}

int main(int argc, char *argv[]) {
		int row;
		printf("How many row are there in the triangle:");
		scanf("%d",&row);
		trianglec(row);
		triangleplus(row);
	return 0;
}*/




void sekil(int kenar)
{
	int i,j;
	for(j=1;j<=kenar;j++)
	{
		for(i=1;i<=kenar-j;i++)
		{
			printf(" ");
		}
		for(i=1;i<=2*j-1;i++)
		{
			printf("c");
		}
		printf("\n");
	}
	for(j=kenar;j>0;j--)
	{
		for(i=1;i<=kenar-j;i++)
		{
			printf(" ");
		}
		for(i=1;i<=2*j-1;i++)
		{
			printf("+");
		}
		printf("\n");
	}
}
int main(int argc, char *argv[]) {
		int kenar;
		printf("Kenar sayisini giriniz:");
		scanf("%d",&kenar);
		printf("\n\n\n");
		sekil(kenar);
		return 0;
}


