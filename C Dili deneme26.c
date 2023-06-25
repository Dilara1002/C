#include <stdio.h>
#include <stdlib.h>
/*#define m2 40
#define empcost 200*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*int a,b,c;
	printf("Enter a number for a:");
	scanf("%d",&a);
	printf("Enter a number for b:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("New numbers for a and b: %d & %d ",a,b);*/
	/*int sm;
	int cost;
	printf("Enter a value for square meter of carpet:");
	scanf("%d",&sm);
	cost=40*sm+200;
	printf("Carpet Cost:%d",cost);*/
	char type;
	float sm;
	float cost=0;
	printf("Types:'T'=Tweety,'B'=BugsBunny,'S'=Spiderman\n");
	printf("Select a type for carpet:");
	scanf("%c",&type);
	printf("Enter a value for square meter of carpet for kids'room:");
	scanf("%f",&sm);

	if(type=='T')
	{
		cost=sm*18;
	}
	else if(type=='B')
	{
		cost=sm*17;
	}
	else if(type=='S')
	{
		cost=sm*19;
	}
	else
	{
		printf("Type is not true.Try again.");
	}
	printf("Carpet Cost:%.2f",cost);
	return 0;
}
