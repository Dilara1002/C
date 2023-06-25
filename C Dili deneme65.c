#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//1
/*
int main(int argc, char *argv[]) {
	int a[5];
	int *s1,*s2;
	int temp=0;
	for(s1=a;s1<a+5;s1++)
	{
		printf("Enter an element:");
		scanf("%d",s1);
	}
	printf("The First Version Of The Array: ");
	for(s1=a;s1<a+5;s1++)
	{
		printf("%4d",*s1);
	
	}
	printf("\n");
	for(s1=a,s2=a+4;s1<s2;s1++,s2--)
	{
		temp=*s1;
		*s1=*s2;
		*s2=temp;
	}
	printf("After The Numbers Places' Are Changed In The Array:  ");
	for(s1=a;s1<a+5;s1++)
	{
		printf("%4d",*s1);
	}
	
	return 0;
}*/


//2
int main(int argc, char *argv[]) {
	int a[5];
	int *p1,*p2;
	int temp;
	int max,min;
	for(p1=a;p1<a+5;p1++)
	{
		printf("Enter an element:");
		scanf("%d",p1);
	}
	printf("\nThe First Version Of The Array: ");
		for(p1=a;p1<a+5;p1++)
	{
		printf("%4d",*p1);
	}
	printf("\n");
	max=p1;
	printf("\nAfter Changed Places' Numbers As From Maximum To Miniimum:");
	for(p1=a;p1<a+5;p1++){
		for(p2=a+1;p2<a+5;p2++)
		{
			if(*p2>max){
				*p2=max;
			}
			else{	
				temp=*p2;
				*p2=*p1;
				*p1=temp;
				
			}
		
		}
	}
	
	for(p1=a;p1<a+5;p1++)
	{
		printf("%4d",*p1);
	}
	/*
	min=p1;
	printf("\nAfter Changed Places' Numbers As From Minimum To Maximum:");
	for(p1=a;p1<a+5;p1++){
		for(p2=a+1;p2<a+5;p2++)
		{
			if(*p2<min){
				*p2=min;
			}
			temp=*p2;
			*p2=*p1;
			*p1=temp;
		}
	}
	for(p1=a;p1<a+5;p1++)
	{
		printf("%4d",*p1);
	}*/

	return 0;
}

