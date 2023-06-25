#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int i,n;
	printf("Enter a value for n:");
	scanf("%d",&n);
	int D[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the %d.number:",i+1);
		scanf("%d",&D[i]);
	}
	for(i=n-1;i>=0;i--){
		printf("%d\t",D[i]);
	}
	
	return 0;
}*/

/*int main(int argc, char *argv[]) {
	int i,n,sum=0;
	printf("Enter a value for n:");
	scanf("%d",&n);
	int D[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the %d.number:",i+1);
		scanf("%d",&D[i]);
		sum+=D[i];
	}
	printf("Summation Of Numbers Of Array:%d\n",sum);
	return 0;
}*/


/*int main(int argc, char *argv[]) {
	int i,n,sum=0;
	printf("Enter a value for n:");
	scanf("%d",&n);
	int D[n];
	int A[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the %d.number:",i+1);
		scanf("%d",&D[i]);
	}
	for(i=0;i<n;i++){
		A[i]=D[i];
	}
	printf("Copied Array: ");
	for(i=0;i<n;i++){
		printf("%d\t",A[i]);
	}
	
	
	return 0;
}*/


int main(int argc, char *argv[]) {
	int i,n;
	int F[100];
	printf("Enter a number for n:");
	scanf("%d",&n);
	int D[n];
	for(i=0;i<n;i++){
		printf("%d.=",i+1);
		scanf("%d",&D[i]);
		if(D[i]==D[i+1])
		{
			F[i]=D[i];
		}
	}
	printf("Elements:%.4d",F[i]);
	
	return 0;
}

