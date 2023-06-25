#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*char letter;
	int i;
	printf("Enter a letter:");
	scanf("%c",&letter);
	if(letter>='A' && letter <='Z')
	{
		i=(int)letter-(int)'A'+1;
	}
	else if(letter>='a' && letter <='z')
	{
		i=(int)letter-(int)'a'+1;
	}
	else
	{
		printf("Enter a letter.Entered thing was not true.");
	}
	printf("%c: %d.line",letter,i);*/
	/*int n;
	float x;
	int i;
	float r;
	printf("Enter a positive number:"),
	scanf("%d",&n),
	printf("Enter a number for x:");
	scanf("%f",&x);
	for(i=1;i<=2*n-1;i+=2)
	{
		r+=i/pow(x,i+1);
	}
	printf("Result:%.2f",r);*/
	int n;
	float x;
	int i;
	float r;
	char go;
	do
	{
		printf("Enter a positive number:"),
		scanf("%d",&n);
		printf("Enter a number for x:");
		scanf("%f %c",&x,&go);
		r=0;
		for(i=1;i<=2*n-1;i+=2)
		{
			r+=i/pow(x,i+1);
		}
		printf("Result:%.2f\n",r);
	}while((go=='E') || (go=='e'));
	printf("Goodbye");
	return 0;
}
