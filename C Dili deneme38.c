#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*void process(int s1,int s2,char i)
{
	switch(i)
	{
		case '+':printf("Summation:%d\n",s1+s2);
		break;
		case '-':printf("Distinction:%d\n",s1-s2);
		break;
		case '*':printf("Multiplication:%d\n",s1*s2);
		break;
		case '/':printf("Division:%d\n",s1/s2);
		break;
		default:printf("There is not process like that");
		break;
	}
}
int main(int argc, char *argv[]) {
	int n1,n2;
	char p;
	printf("Enter a process which is one of them:'+' or '-' or '*' or '/':");
	scanf("%c",&p);
	printf("Enter first number:");
	scanf("%d",&n1);
	printf("Enter second number:");
	scanf("%d",&n2);
	
	process(n1,n2,p);
	return 0;
}*/

int process(int s1,int s2,char i)
{
	if(i == '+')
	{
		return s1+s2;
	}
	else if(i == '-')
	{
		return s1-s2;
	}
	else if(i == '*')
	{
		return s1*s2;
	}
	else if(i == '/')
	{
		return s1/s2;
	}
	else
	{
		printf("Wrong operator\n");
		return 0;
	}
}
int main(int argc, char *argv[]) {
		int n1,n2;
	char p;
	printf("Enter a process which is one of them:'+' or '-' or '*' or '/':");
	scanf("%c",&p);
	printf("Enter first number:");
	scanf("%d",&n1);
	printf("Enter second number:");
	scanf("%d",&n2);
	process(n1,n2,p);
	printf("Result:%d\n",process(n1,n2,p));
	
	return 0;
}
