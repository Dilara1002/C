#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*char d[15]="dilarasumer";
	printf("%s\n",&d);
	char a[50];
	printf("Enter something for character array:");
	scanf("%s",&a);
	printf("%s\n",a);*/
	/*char arr[10]="Languages";
	printf("Our word:%d\n",strlen(arr));
	printf("Our word:%d",sizeof(arr));*/
	/*int r1;*/
	/*int r2;*/
	/*char s[10]="ABCDEF";
	char m[10]="abcdef";
	r1=strcmp(s,m);
	printf("%d\n",r1);
	/*r2=strcmp(m,s);
	printf("%d",r2);*/
	/*if(r1<0)
	{
		printf("s is smaller than m");
	}
	else if(r1>0)
	{
		printf("s is bigger than m");
	}
	else
	{
		printf("s and m are equal to each other");
	}*/
	/*char s[10]="abcdef";
	char m[10]="abcdef";
	r1=strcmp(s,m);
	printf("%d\n",r1);
	/*r2=strcmp(m,s);
	printf("%d",r2);*/
	/*if(r1<0)
	{
		printf("s is smaller than m");
	}
	else if(r1>0)
	{
		printf("s is bigger than m");
	}
	else
	{
		printf("s and m are equal to each other");
	}*/
	/*char d1[10]="ZSakEsmTw";
	char d2[10]="SmRklWQen";
	int r;
	r=strncmp(d1,d2,7);
	if(r<0)
	{
		printf("d1 is smaller than d2");
	}
	else if(r>0)
	{
		printf("d1 is bigger than d2");
	}
	else
	{
		printf("d1 and d2 are equal to each other");
	}*/
	/*char dilara[50]="My name is Dilara";
	char sumer[50];
	/*strcpy(sumer,dilara);
	printf("%s",sumer);*/
	/*strncpy(sumer,dilara,10);
	printf("%s",sumer);*/
	/*char a[50];
	strcat(a,"I am");
	strcat(a," studying");
	strcat(a," C programing");
	printf("%s",a);*/
	/*char f1[50];
	char f2[50];
	int c;
	printf("Enter something for string array 1:");
	scanf("%s",&f1); 
	printf("Enter something for string array 2:");
	scanf("%s",&f2);
	printf("How many characters whould you like to add end of array 1 from to array2:");
	scanf("%d",&c);
	printf("Combined Arrays:%s\n",f1);
	printf("Before Combined Arrays:%s\n",strncat(f1,f2,c));*/
	char d[100];
	char n[50];
	printf("Enter your departmant that you are stdying:");
	gets(d);
	printf("%s\n",d);
	printf("Enter your name:");
	fgets(n,sizeof(n),stdin);
	printf("%s",n);
	return 0;
}
