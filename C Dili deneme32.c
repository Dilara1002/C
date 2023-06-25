#include <stdio.h>
#include <stdlib.h>
/*#define min 0.25
#define more 0.08
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*float call;
	float cost;
	printf("Enter time of your calling as a minute:");
	scanf("%f",&call);
	if(call<=3)
	{
		cost=min;
		printf("Calling Cost:%.2f",cost);
	}
	else
	{
		cost=min+(call-3)*more;
		printf("Calling Cost:%.2f",cost);
	}*/
	int x,y;
	char op;
	printf("Enter an operator:");
	scanf("%c",&op);
	printf("Enter a number for x:");
	scanf("%d",&x);
	printf("Enter a number for y:");
	scanf("%d",&y);
		if(x==0 || y==0)
	{
		printf("The process cannot do!");
	}
	else
	{
			switch(op)
	{
		case '+':printf("1/%d + 1/%d = %d/%d",x,y,x+y,x*y);
		break;
		case '-':printf("1/%d - 1/%d = %d/%d",x,y,x-y,x*y);
		break;
		case '/':printf("1/%d / 1/%d = %d/%d",x,y,y,x);
		break;
		case '*':printf("1/%d * 1/%d = 1/%d",x,y,x*y);
		break;
		default:printf("Operator is mistaken!");
		break;
	}
	}	

	
	return 0;
}
