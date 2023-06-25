#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d[100];
	int *ptr1,*ptr2;
	int n;
	int temp;
	printf("Enter number of element of the array:");
	scanf("%d",&n);
	for(ptr1=d;ptr1<d+n;ptr1++)
	{
		printf("Enter an element:");
		scanf("%d",ptr1);
	}
	printf("First version of the array:");
	for(ptr1=d;ptr1<d+n;ptr1++)
	{
		printf("%4d",*ptr1);
	}
	printf("\n");
	for(ptr1=d,ptr2=d+n-1;ptr1<ptr2;ptr1++,ptr2--)
	{
		temp=*ptr1;
		*ptr1=*ptr2;
		*ptr2=temp;
	}
	printf("After version of the numbers'places are changed");
	for(ptr1=d;ptr1<d+n;ptr1++)
	{
		printf("%4d",*ptr1);
	}
	return 0;
}
