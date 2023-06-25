#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*int us(int x,int y)
{
	int i;
	int result=1;
	for(i=1;i<=y;i++)
	{
		result*=x;
	}
	return result;
}
int main(int argc, char *argv[]) {
	int x,y;
	printf("Enter a number for x:");
	scanf("%d",&x);
	printf("Enter a number for y:");
	scanf("%d",&y);
	printf("Result Of Exponential Number:%d\n",us(x,y));
	return 0;
}*/

/*int fac(int b)
{
	int i;
	int result=1;
	for(i=1;i<=b;i++)
	{
		
			result*=i;
	}
	return result;
}

int main(int argc, char *argv[]){
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d! = %d\n",i,fac(i));
	}
	
	return 0;
}*/

/*void fac(int n)
{
	int i,j;
	int result=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			result=i*j;
			printf("%d x %d = %d\n",i,j,result);
		}
	}
	
}

int main(int argc, char *argv[]){
	int i=10;
	fac(i);
	
	
return 0;
}	*/


int fac(int n)
{
	int i,j;
	int result=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			result=i*j;
			
		}
	}
	return result;
}

int main(int argc, char *argv[]){
	int i,j;
		for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d x %d = %d\n",i,j,fuc(i));
		}
	}
	
	
return 0;
}
