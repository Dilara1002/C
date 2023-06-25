#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*float plus(float x, float y)
{
	float result;
	result=x+y;
	
}
int main(int argc, char *argv[]) {
	float x,y;
	float sum;
	printf("Enter a number for x:");
	scanf("%f",&x);
	printf("Enter a number for y:");
	scanf("%f",&y);
	sum=plus(x,y);
	printf("Summation:%.2f",sum);
	return 0;
}*/
/*float plus(float x, float y)
{
	return x+y;
}
	
int main(int argc, char *argv[]) {
	float x,y;
	printf("Enter a number for x:");
	scanf("%f",&x);
	printf("Enter a number for y:");
	scanf("%f",&y);
	printf("Summation:%.2f",plus(x,y));
	return 0;
}*/
/*void process(char op,int x,int y)
{
	switch(op)
	{
		case '+':printf("Summation:%d\n",x+y);
		break;
		case '-':printf("Distinction:%d\n",x-y);
		break;
		case '*':printf("Multiplication:%d\n",x*y);
		break;
		case '/':printf("Division:%d\n",x/y);
		break;
		default:printf("Wrong Operator");
		break;
	}
}
int main(int argc, char *argv[]) {
	
	int x,y;
	char op;
	printf("Enter an operator:");
	scanf("%c",&op);
	printf("Enter a number for x:");
	scanf("%d",&x);
	printf("Enter a number for y:");
	scanf("%d",&y);
	process(op,x,y);
	
	return 0;
}*/

float process(float x, float y,char op)
{
	if(op=='+')
	{
		return x+y;
	}
	else if(op=='-')
	{
		return x-y;
	}
	else if(op=='*')
	{
		return x*y;
	}
	else if(op=='/')
	{
		return x/y;
	}
	else
	{
		printf("Wrong Operator\n");
	}
}


int main(int argc, char *argv[]) {
	
	float x,y;
	char op;
	printf("Enter an operator:");
	scanf("%c",&op);
	printf("Enter a number for x:");
	scanf("%f",&x);
	printf("Enter a number for y:");
	scanf("%f",&y);
	printf("Result:%.2f",process(x,y,op));
	return 0;
}

