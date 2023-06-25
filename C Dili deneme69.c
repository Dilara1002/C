#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[10];
	int b[10];
	int n,k;
	int i;
	int *p1,*p2;
	printf("How many element are there in the array a:");
	scanf("%d",&n);
	printf("How many element are there in the array b:");
	scanf("%d",&k);
	printf("Enter the elements for array a:\n");
	for(p1=a;p1<(a+n);p1++)
	{
		printf("Element %d:",p1-a);
		scanf("%d",p1);
	}
	printf("Enter the elements for array b:\n");
	for(p2=b;p2<(b+k);p2++)
	{
		printf("Element %d:",p2-b);
		scanf("%d",p2);	
	}
	printf("Array a:");
	for(i=0;i<n;i++)
	{
		printf("%4d",*(a+i));
	}
	printf("\nArray b:");
	for(i=0;i<k;i++)
	{
		printf("%4d",*(b+i));
	}
	for(p1=a+n,p2=b;p2<b+k;p1++,p2++)
	{
		*p1=*p2;
	}
	printf("\nAfter array b added to array a:");
	for(i=0;i<n+k;i++)
	{
		printf("%4d",*(a+i));
	}

	return 0;
}
