#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*int seri(int n)
{
	int i,toplam=0;
	for(i=1;i<=n;i++)
	{
		toplam=toplam+(pow(i,2));
	
	}
	return toplam;
}
int main(int argc, char *argv[]) {
	int n,i;
	printf("Seri sayisini giriniz:");
	scanf("%d",&n);
	printf("Seri Toplami:%d\n",seri(n));
	return 0;
}*/


void combine(int A[], int B[],int C[],int N,int K)
{
	int i,j,counter=0;
	for(i=0;i<N;i++)
	{
		C[counter]=A[i];
		counter++;
	}
	for(j=0;j<K;j++)
	{
		C[counter]=B[j];
		counter++;
	}
}
int main(int argc, char *argv[]) {
	
	int N,K;
	printf("Enter a number for N:");
	scanf("%d",&N);
	printf("Enter a number for K:");
	scanf("%d",&K);	
	int A[N],B[K];
	int i;
	for(i=0;i<N;i++)
	{
		printf("%d. number:",i+1);
		scanf("%d",&A[i]);
	}
	for(i=0;i<K;i++)
	{
		printf("%d. number:",i+1);
		scanf("%d",&B[i]);
	}
	int combo[N+K];
	combine(A,B,combo,N,K);
	for(i=0;i<N+K;i++)
	{
		printf("%4d",combo[i]);
	}
	return 0;
}
