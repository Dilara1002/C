#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//1
/*
int main(int argc, char *argv[]) {
	int arr[100];
	int N,number,searchindex;
	int *ptr;
	ptr=&arr[0];
	printf("Enter number of elements in the array:");
	scanf("%d",&N);
	printf("The elements of the array:\n");
	find(arr,N);

	printf("Which number would you like to find in the array:");
	scanf("%d",&number);
	searchindex=control(arr,N,number);
	if(searchindex==-1)
	{
		printf("%d is not found in the array",number);
	}
	else
	{
		printf("Element %d is in %d.line in the array",number,searchindex+1);
	}
	return 0;
}
int control(int *arr,int N,int number)
{
	int index=0;
	int *arr_end;
	arr_end=(arr+N-1);
	while(arr<=arr_end && *arr!=number)
	{
		arr++;
		index++;
	}
	if(arr<=arr_end)
	{
		return index;
	}
	return -1;
}
void find(int *arr,int N)
{
	int *arr_end;
	arr_end=(arr+N-1);
	while(arr<=arr_end)
	{
		scanf("%d",arr++);
		
	}
	
}*/



//2
/*
int main(int argc, char *argv[]) {
	int a[100];
	int n,x,s_i;
	int *p;
	p=a[0];
	printf("Enter the number of element of the array:");
	scanf("%d",&n);
	printf("The elements of the array:\n");
	print(a,n);
	printf("Which number would you like to search in the array:");
	scanf("%d",&x);
	s_i=searching(x);

	if(s_i==1){
		printf("%d is a pozitive number",x);
	}
	else if(s_i==0){
		printf("%d is a negative number",x);
	}
	
	
	return 0;
}
void print(int *a,int n){
	int a_end;
	a_end=(a+n-1);
	while(a<=a_end){
		scanf("%d",a++);
	}
}
int searching(int x){

	if(x>0){
		return 1;
	}
	else{
		return 0;
	}
	
}*/



//3
/*
int main(int argc, char *argv[]) {
	int a[100];
	int n,x,s_i;
	int *p;
	p=a[0];
	printf("Enter the number of element of the array:");
	scanf("%d",&n);
	printf("The elements of the array:\n");
	print(a,n);
	printf("Which number would you like to search in the array:");
	scanf("%d",&x);
	s_i=searching(x);

	 if(s_i==1){
		printf("%d is a odd number",x);
	}
	else if(s_i==0){
		printf("%d is a even number",x);
	}
	
	
	return 0;
}
void print(int *a,int n){
	int a_end;
	a_end=(a+n-1);
	while(a<=a_end){
		scanf("%d",a++);
	}
}
int searching(int x){

	if(x%2!=0){
		return 1;
	}
	else{
		return 0;
	}
}*/



//4

int main(int argc, char *argv[]) {
	int a[100];
	int n,x,s_i;
	int *p;
	p=a[0];
	printf("Enter the number of element of the array:");
	scanf("%d",&n);
	printf("The elements of the array:\n");
	print(a,n);
	printf("Which number would you like to search in the array:");
	scanf("%d",&x);
	s_i=searching(a,n,x);

	 if(s_i==1){
		printf("%d is a prime number",x);
	}
	else if(s_i==0){
		printf("%d is not a prime number",x);
	}
	
	
	return 0;
}
void print(int *a,int n){
	int a_end;
	a_end=(a+n-1);
	while(a<=a_end){
		scanf("%d",a++);
	}
}
int searching(int *a,int n,int x){
	int i,c=0;
	for(i=1;i<=x;i++){
		if(x%i==0){
			c++;
		}
	}
	if(c==2){
			return 1;
		}
	else{
		return 0;
	}
	
}


