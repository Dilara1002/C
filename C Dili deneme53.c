#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*double sr(int n)
{
	double squareroot;
	int i;
	if(n>0.0)
	{
		squareroot=n/2;
		for(i=0;i<50;i++)
		{
			squareroot=((squareroot*squareroot)+n)/(2*squareroot);
		}
		return squareroot;
	}
	else if(n==0)
	{
		return 0;
	}
	else
	{
		printf("Mistake!Enter a valid number.");
	}

}
int main(int argc, char *argv[]) {
	double number;
	printf("Enter a number to find square root:");
	scanf("%lf",&number);
	printf("Square Root:%.2lf\n",sr(number));
	return 0;
}*/




/*void butterfly1(int row)
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
		for(j=1;j<=2*(row-i)-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void butterfly2(int row)
{
	int i,j;
	int empty=row-1;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<empty;j++)
		{
			printf(" ");
		}
		empty=empty--;
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}	
}
int main(int argc, char *argv[]) {
	int row;
	printf("How many row are there int butterfly:");
	scanf("%d",&row);
	butterfly1(row);
	butterfly2(row);
	
	
	return 0;
}*/


void sekil(int kenar,int karakter)
{
	int i,j;
	for(j=kenar;j>0;j--)
	{
		for(i=1;i<=kenar-j;i++)
		{
			printf(" ");
		}
		for(i=1;i<=2*j-1;i++)
		{
			printf("%c",karakter);
		}
		printf("\n");
	}
	for(j=1;j<=kenar;j++)
	{
		for(i=1;i<=kenar-j;i++)
		{
			printf(" ");
		}
		for(i=1;i<=2*j-1;i++)
		{
			printf("%c",karakter);
		}
		printf("\n");
	}
}
int main(int argc, char *argv[]) {
		int kenar;
		char karakter;
		printf("Bastirmak istediginiz karakteri giriniz:");
		scanf("%c",&karakter);
		printf("Kenar sayisini giriniz:");
		scanf("%d",&kenar);
		printf("\n\n\n");
		sekil(kenar,karakter);
		return 0;
}
