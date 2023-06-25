#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void reverse_sentence(char *t,int h){
	if(t==0){
		printf("%c",t[h]);
	}
	else{
		printf("%c",t[h]);
		reverse_sentence(t,h-1);	
	}
}
int main() {
	char s[250];
	printf("Enter a sentence:");
	gets(s);
	reverse_sentence(s,strlen(s)-1);
	return 0;
}
