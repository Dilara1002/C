#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int a;
	char b;
	float c;
	double d;
	
	printf("Enter a value for b:");
	scanf("%c",&b);
	printf("Enter a value for a:");
	scanf("%d",&a);
	printf("Enter a value for c:");
	scanf("%f",&c);
	printf("Enter a value for d:");
	scanf("%lf",&d);

	printf("Assignation:%c\n",b);
	printf("Adress:%d\n",&b);
	printf("Assignation:%d\n",a);
	printf("Adress:%d\n",&a);
	printf("Assignation:%.2f\n",c);
	printf("Adress:%d\n",&c);
	printf("Assignation:%lf\n",d);
	printf("Adress:%d\n",&d);*/
	
	
	
	/*int x,y,sum;
	int *p1,*p2;
	p1=&x;
	p2=&y;
	printf("Enter a value for x:");
	scanf("%d",p1);
	printf("Enter a value for y:");
	scanf("%d",p2);
	sum=*p1 + *p2;
	printf("Summation of %d and %d:%d\n",p1,p2,sum);
	
	
	
	/*int x,y;
	int *p1,*p2;
	int temp;
	p1=&x;
	p2=&y;
	printf("Enter a number for x:");
	scanf("%d",p1);
	printf("Enter a number for y:");
	scanf("%d",p2);
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("x:%d\ny:%d\n",*p1,*p2);
	return 0;
}*/	




/*void change(int *x,int *y)
{
	
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	}	
int main(int argc, char *argv[]) {	
	int x,y;
	printf("Enter a number for x:");
	scanf("%d",&x);
	printf("Enter a number for y:");
	scanf("%d",&y);
	
	printf("Before changing the places of numbers:\n");
	printf("x:%d\n",x);
	printf("y:%d\n",y);
	change(&x,&y);
	printf("After changing the places of numbers:\n");
	printf("x:%d\n",x);
	printf("y:%d\n",y);
	return 0;
}*/



void change(int *x,int *y)
{
	
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("After changing the places of numbers:\n");
	printf("x:%d\n",*x);
	printf("y:%d\n",*y);
	}	
int main(int argc, char *argv[]) {	
	int x,y;
	printf("Enter a number for x:");
	scanf("%d",&x);
	printf("Enter a number for y:");
	scanf("%d",&y);
	
	printf("Before changing the places of numbers:\n");
	printf("x:%d\n",x);
	printf("y:%d\n",y);
	change(&x,&y);

	return 0;
}
