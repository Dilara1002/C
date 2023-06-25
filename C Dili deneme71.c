#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void sessiz(char a[]){
	int i,uzunluk,s;
	char harf;
	uzunluk=strlen(a);
	for(i=0;i<uzunluk;i++){
		harf=a[i];
		if(harf>='a' && harf<='z'){
			harf = harf - 32;
		}
		
		s==a[uzunluk];
		if(harf =='A' || harf =='E' || harf =='I' || harf =='U' || harf =='O'){
			s--;
		}
	}
	printf("Kelimede %d adet sessiz harf vardir",s);
}
int main(int argc, char *argv[]) {
	char k[100];
	
	printf("Kelime giriniz:");
	gets(k);
	sessiz(k);
	return 0;
}
