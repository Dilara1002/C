#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*char s[100];
	int i=0;
	int counter=0;
	printf("Enter a sentence:");
	gets(s);
	while(s[i])
	{
		if(s[i]==32)
		{
			counter++;
		}
		/*else if(s[i]==46)
		{
			break;
		}*/
		/*i++;
		
	}
	
	printf("There are %d piece word in sentence.",counter+1);*/
	
	/*char s[150];
	int i=0;
	printf("Enter a sentence:");
	gets(s);
	while(s[i])
	{
		i++;
	}
	printf("There are %d piece character in sentence.",i);*/
	/*char s[150];
	int i;
	printf("Enter a sentence:");
	gets(s);
	for(i=0;s[i];i++)
	{
		printf("%c\n",s[i]);
	}*/
	
	char s[10];
	int i=0;
	int j=0;
	printf("Enter something:");
	gets(s);
	while(i<strlen(s))
	{
		j=0;
		while(j<=i)
		{
			printf("%c",s[j]);
			j++;
		}
		printf("\n");
		i++;
	}
	

	return 0;
}
