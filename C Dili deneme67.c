#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//1
/*int main(int argc, char *argv[]) {
	char d[100];
	char *ptr;
	printf("Enter a character array:");
	gets(d);
	for(ptr=d;*ptr;ptr++)
	{
		
	}
	printf("Array %s has %d pieces character",d,ptr-d);
	return 0;
}*/


//2
/*int main(int argc, char *argv[]) {
	char d[100];
	char *ptr;
	char n;
	printf("Enter a character array:");
	gets(d);
	printf("Enter a character to delete in the array:");
	scanf("%c",&n);
	ptr=d;
	while(*ptr)
	{
		if(*ptr==n)
		{
			strcpy(ptr,ptr+1);
		}
		else
		{
			ptr++;
		}
	}
	printf("After process is over:%s",d);
	return 0;
}*/


//3

int main(int argc, char *argv[]) {
	int d[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int *ptr;
	int i;
	printf("First Version Of The Array:");
	for(i=0;i<15;i++)
	{
		printf("%4d",*(d+i));
	}
	printf("\n");
	printf("Even Numbers In The Array:");
	for(i=0;i<15;i+=2)
	{
		printf("%4d",*(d+i));
	}
	printf("\n");
	printf("Odd Numbers In The Array:");
	for(ptr=d+1;ptr<d+15;ptr+=2)
	{
		printf("%4d",*ptr);
	}
	return 0;	
}
