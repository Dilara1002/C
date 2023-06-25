#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*void f()
{
	int n;
	while(1)
	{
		printf("Enter a number for n:");
		scanf("%d",&n);
		if(n<0)
		{
			break;
		}
	}

}
int main(int argc, char *argv[]) {
	f();
	return 0;
}*/

int perfect(int n)
{
	int i=1;
	int sum=0;
	while(i<n)
	{
		if(n%i==0)
		{
			sum+=i;
		}
		i++;
	}
	if(sum==n)
	{
		return 1;
	}
	else
	{
		return 0;
		
	}
}
int main(int argc, char *argv[]) {
	int number;
	int result;
	printf("Enter a number:");
	scanf("%d",&number);
	result=perfect(number);
	if(result==1)
	{
		printf("The number is perfect.");
	}
	else if(result==0)
	{
		printf("The number is not perfect.");
	}
	return 0;
}
