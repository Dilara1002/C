#include <stdio.h>
#include <stdlib.h>
#define MAX 15
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//1
/*
int main(int argc, char *argv[]) {
	char arr[MAX]={'k','l','b','d','q','i','s','t','e','f','o','r','c','h','x'};
	char *p1,*p2;
	char arr_copy[MAX];
	int i;
	p2=arr_copy;
	for(p1=arr;p1<arr+MAX;p1++,p2++)
	{
		*p2=*p1;
		//p2++;
	}
	printf("Original Table:\n");
	for(i=0;i<MAX;i++)
	{
		printf("%3c",*(arr+i));
	}
	printf("\nCopy Table:\n");
	for(i=0;i<MAX;i++)
	{
		printf("%3c",*(arr_copy+i));
	}
	return 0;
}*/
//2
int main(int argc, char *argv[]) {
		char arr[MAX]={'d','i','l','a','r','a',' ','s','u','m','e','r'};
	char *p1,*p2;
	char arr1[MAX],arr2[MAX];
	int i;
	printf("Original Table:\n");
	for(i=0;i<MAX;i++)
	{
		printf("%3c",*(arr+i));
	}
	p1=p2=arr;
	for(i=0;i<MAX;i++){
		if(p1=='a' || p1=='e' || p1=='i' || p1=='u' || p1=='o'){
			arr1[i]=arr[i];
			printf("Vowels: %4c",arr1);
		}
		else{
			arr2[i]=arr[i];
			printf("Silents: %4c",arr2);
		}
	}
	
	return 0;
}
