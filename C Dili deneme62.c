#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int arr[100];
	int N,i;
	int *ptr;
	ptr=arr;
	printf("How many elements are there in the array:");
	scanf("%d",&N);
	printf("Enter the elements:\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	ptr=arr;//(1. for döngüsünde ptr zaten deðerleri aldý. Ama bunu bastýrmamýz için tekrar ptryi adrese eþitlememiz lazým ki baþtan baþlayýp sayýlarý yazsýn
	printf("Values of elements:\n");
		for(i=0;i<N;i++)
	{
		printf("%d\n",*ptr);
		ptr++;
	}
	return 0;
}*/



/*int main(int argc, char *argv[]) {
	int source_arr[100];
	int destination_arr[100];
	int N,i;
	int *source_ptr;
	int *destination_ptr;
	int *end_ptr;
	source_ptr=source_arr;
	destination_ptr=destination_arr;
	printf("How many elements are there in the array:");
	scanf("%d",&N);
	printf("Enter the elements:\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",(source_ptr+i));
		
	}
	end_ptr=&source_arr[N-1];
	printf("Before source array copied:\n");
	print(source_arr,N);
	while(source_ptr<=end_ptr)
	{
		*destination_ptr=*source_ptr;
		source_ptr++;
		destination_ptr++;
	}
	printf("After source array copied:\n");
	print(source_arr,N);
	printf("After elements copied to destination array:\n");
	print(destination_arr,N);

	return 0;
}
void print(int *arr,int N)
{
		int i;
		printf("Values of elements:\n");
		for(i=0;i<N;i++)
	{
		printf("%d\n",*arr);
		arr++;
	}
}*/

int main(int argc, char *argv[]) {
	int source_arr1[100],source_arr2[100];
	int dest_arr[200];
	int n1,n2,n3,i;
	int *s1_p,*s2_p;
	int *d_p1;
	int *end1_p,*end2_p;
	s1_p=source_arr1;
	s2_p=source_arr2;
	d_p1=dest_arr;
	printf("Enter the number of element:");
	scanf("%d",&n1);
	printf("Enter the number of element:");
	scanf("%d",&n2);
	printf("Enter the elements:\n");
	for(i=0;i<n1;i++){
		scanf("%d",(s1_p+i));
	}
	printf("Enter the elements:\n");
	for(i=0;i<n1;i++){
		scanf("%d",(s2_p+i));
	}
	end1_p=&source_arr1[n1-1]; 
	end2_p=&source_arr2[0];

	printf("Before source array copied:\n");
	print(source_arr1,source_arr2,n1,n2);
	while(s1_p<=end1_p)
	{
		*d_p1=*s1_p;
		s1_p++;
		d_p1++;
	}
	while(end1_p<=end2_p && s2_p<=end2_p)
	{
		*d_p1=*s2_p;
		s2_p++;
		d_p1++;
	}
	printf("After source arrays copied:\n");
	print(source_arr1,source_arr2,n1,n2);
	n3=n1+n2;
	printf("After elements copied to destination array:\n");
	print(dest_arr,n3 );

	return 0;
}
void print(int *arr1,int *arr2,int*d,int n1,int n2,int n3)
{
		int i;
		printf("Values of elements:\n");
		for(i=0;i<n1;i++)
	{
		printf("%d\n",*arr1);
		arr1++;
	}
	printf("Values of elements:\n");
		for(i=0;i<n2;i++)
	{
		printf("%d\n",*arr2);
		arr2++;
	}
	printf("Values of elements:\n");
		for(i=0;i<n3;i++)
	{
		printf("%d\n",*d);
		d++;
	}
}

