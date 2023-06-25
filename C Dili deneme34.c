#include <stdio.h>
#include <stdlib.h>
/*#define low 150*/
#define book 0.04
#define food 0.056
#define lux 0.196

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*int num;
	int minnum,minh;
	int height;
	int f;
	
	printf("Enter a number of  a student:");
	scanf("%d",&num);
	printf("Enter a height of a student:");
	scanf("%d",&height);
	minnum=num;
	f=abs(height-low);
	while(num>0)
	{
		printf("Enter a number of  a student:");
		scanf("%d",&num);
		printf("Enter a height of a student:");
		scanf("%d",&height);
		if(abs(height-low)<f)
		{
			f=abs(height-low);
			minnum=num;
			minh=height;
		}
			
	}
	printf("Student is with %d number and %d height who is closest to %d",minnum,minh,low);*/
	
	/*int rabbit,bird;
	int i;
	rabbit=1042;
	bird=2272;
	i=0;
	while(rabbit<bird)
	{
		rabbit=rabbit+((rabbit*38)/1000);
		bird=bird+((bird*12)/1000);
		i++;
		printf("%d. year: Rabbit=%d   Bird=%d\n",i,rabbit,bird);
	}
	printf("%d year gone",i);*/
	/*int code;
	float cost;
	printf("Code 0:Book  Code 1:Food  Code 2:Lux\n");
	printf("Enter a product what you want to buy:");
	scanf("%d",&code);
	printf("Enter a cost for product:");
	scanf("%f",&cost);
	switch(code)
	{
		case 0:printf("Tax Of Book:%.2f ",cost+cost*book);
		break;
		case 1:printf("Tax Of Food:%.2f",cost+cost*food);
		break;
		case 2:printf("Tax Of Lux:%.2f",cost+cost*lux);
		break;
		default:printf("There is not like this kind of code");
		break;
	}*/
	
	int code;
	float cost;
	printf("Code 0:Book  Code 1:Food  Code 2:Lux\n");
	printf("Enter a product what you want to buy:");
	scanf("%d",&code);
	printf("Enter a cost for product:");
	scanf("%f",&cost);	
	if(code==0)
	{
		cost+=cost*book;
		printf("Tax Of Book:%.2f ",cost);
	}
	else if(code==1)
	{
		cost+=cost*food;
		printf("Tax Of Lux:%.2f",cost);
	}
	else if(code==2)
	{
		cost+=cost*lux;
		printf("Tax Of Lux:%.2f",cost);
	}
	else
	{
		printf("There is not like this kind of code");
	}
	return 0;
}
