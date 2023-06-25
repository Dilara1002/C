#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,z;
	printf("Enter a number for x:");
	scanf("%d",&x);
	printf("Enter a number for y:");
	scanf("%d",&y);
	printf("Enter a number for z:");
	scanf("%d",&z);
	/*if(x>y && x>z)
	{
		printf("The biggest number is x\n");
	}
	else if(y>x && y>z)
	{
		
	}
	else if(z>x && z>y)
	{
		printf("The biggest number is z\n");
	}
	else
	{
		printf("There are some numbers that they are equal to each other\n");
	}
	if(x<y && x<z)
	{
		printf("The smallest number is x\n");
	}
	else if(y<x && y<z)
	{
		printf("The smallest number is y\n");
	}
	else if(z<x && z<y)
	{
		printf("The smallest number is z\n");
	}
		else
	{
		printf("There are some numbers that they are equal to each other\n");
	}*/
	int max,min;
	max=x;
	if(y>max)
	{
		max=y;
	}
	if(z>max)
	{
		max=z;
	}
	printf("The maximum number:%d\n",max);
	/*if(max>y && max>z)
	{
		printf("The biggest number is x\n");
	}
	else if(y>max && y>z)
	{
		printf("The biggest number is y\n");
	}
	else
	{
		printf("The biggest number is z\n");
	}*/
	min=x;
	if(y<min)
	{
		min=y;
	}
	if(z<min)
	{
		min=z;
	}
	printf("The minimum number:%d",min);
	/*if(min<y && min<z)
	{
		printf("The smallest number is x\n");
	}
	else if(y<min && y<z)
	{
		printf("The smallest number is y\n");
	}
	else
	{
		printf("The smallest number is z\n");
	}*/
	
	return 0;
}
