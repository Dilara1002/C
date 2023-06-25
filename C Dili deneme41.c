#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*void fac(int s,int result)
{
	int i;
	result=1;
	for(i=1;i<=s;i++)
	{
		result=result*i;
	}
	printf("Result:%d\n",result);
}
int main(int argc, char *argv[]) {
	int s;
	int result;
	printf("Enter a number:");
	scanf("%d",&s);
	fac(s,result);
	
	return 0;
}*/

int fac(int s)
{
	int i;
	int result=1;
	for(i=s;i>=1;i--)
	{
		result*=i;
	}
	return result;
}

int main(int argc, char *argv[]) {
	int s;
	int result;
	printf("Enter a number:");
	scanf("%d",&s);
	printf("%d! =%d",s,fac(s));
	
	return 0;
}

