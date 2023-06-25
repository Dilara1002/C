#include <stdio.h>
#include <stdlib.h>
#define road 450 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*int x,y,z;
	int N;
	printf("Enter a number between 1 and 9 for x:");
	scanf("%d",&x);
	printf("Enter a number between 0 and 9 for y:");
	scanf("%d",&y);
	printf("Enter a number between 0 and 9 for z:");
	scanf("%d",&z);
	N=100*x+10*y+z;
	printf("Number=%d",N);*/
	/*int fs,ls;
	int t;
	int as;
	printf("Enter the first speed of your car:");
	scanf("%d",&fs);
	printf("Enter the last speed of your car:");
	scanf("%d",&ls);
	printf("Enter the time when you drived:");
	scanf("%d",&t);
	as=(ls-fs)/t;
	printf("Average Speed:%d",as);*/
	/*int time;
	int velocity;
	printf("Enter time as an hour:");
	scanf("%d",&time);
	velocity=road/time;
	printf("Velocity:%d km/h",velocity);*/
	/*char letter;
	printf("Enter a letter:");
	scanf("%c",&letter);
	if(letter>='A' && letter<='Z')
	{
		printf("Minuscuule:%c",tolower(letter));
	}
	else
	{
		printf("Capital:% c" ,toupper(letter));
	}*/
	/*int n;
	int i=1;
	float result=0;
	printf("Enter a number:");
	scanf("%d",&n);
	do
	{
		
		if(i==1)
		{
			printf("%d ",i);
		}
		else if(i==n)
		{
			printf("1/%d = %.2f",i,result);
		}
		else
		{
			printf("1/%d +",i);	
		}
		result+=(float)1/i;
		i++;
		
	}
	while(i<=n);*/
	int n;
	int i;
	float result=0;
	do
	{
			printf("What is the value of n:"),
			scanf("%d",&n);
	}while(n<1);
	for(i=1;i<=n;i++)
	{
		result+=(float)1/i;
	}
	printf("Result:%.2f",result);
	return 0;
}
