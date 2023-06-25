#include <stdio.h>
#include <stdlib.h>
//#define n 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int arr[n];
	int *ptr;
	int i,min,max;
	printf("Enter %d piece element:\n",n);
	for(ptr=arr;ptr<arr+n;ptr++)
	{
		scanf("%d",ptr);
	}
	max=min=arr[0];
	for(ptr=arr+1;ptr<arr+n;ptr++)
	{
		if(*ptr>max)
		{
			max=*ptr;
		}
		else if(*ptr<min)
		{
			min=*ptr;
		}
	}
	printf("The maximum element of the array:%d\n",max);
	printf("The minimum element of the array:%d\n",min);
	return 0;
}*/


int fac(int *N)
{
	int i,result=1;
	for(i=*N;i>=1;i--)
	{
		result*=(*N);
		(*N)--;
	}
	return result;
}

int main(int argc, char *argv[]) {
	
	int n,originalnum;
	printf("Enter the number which the number to be factored:");
	scanf("%d",&n);
	originalnum=n;
	printf("%d!=%d",originalnum,fac(&n));
	
	
	return 0;
}

