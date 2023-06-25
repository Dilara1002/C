#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*void findtime(int sc)
{
	int hour,minute,second,time;
	hour=sc/3600;
	time=sc%3600;
	minute=time/60;
	second=time%60;
	printf("%d:%d:%d",hour,minute,second);
}
int main(int argc, char *argv[]) {
	int sc;
	printf("Enter a value to find the time:");
	scanf("%d",&sc);
	findtime(sc);
	return 0;
}*/



/*float fctf(float c)
{
	return (1.8*c)+32;
}
float fftc(float f)
{
	return (0.55)*(f-32);
}
int main(int argc, char *argv[]) {
	/*f=(1.8*c)+32    c=(5/9)*(f-32)*/
	/*float f,c;
	int type;
	printf("1-From C To F\n");
	printf("2-From F To C\n");
	printf("Enter a type:");
	scanf("%d",&type);

	if(type==1)
	{
		printf("Enter a degree:");
		scanf("%f",&c);
		printf("%.2f C = %.2f F",c,fctf(c));
	}
	else if(type==2)
	{
		printf("Enter a degree:");
		scanf("%f",&f);
		printf("%.2f F = %.2f C",f,fftc(f));
	}
	else
	{
		printf("Mistaken Entry!");
	}
	
	return 0;
}*/




/*void alan(int kenar,int yukseklik)
{
	int alan;
	alan=(kenar*yukseklik)/2;
	printf("Alan:%d\n",alan);
}
int main(int argc, char *argv[]) {
	int kenar;
	int yukseklik;
	printf("Kenar degeri giriniz:");
	scanf("%d",&kenar);
	printf("Yukseklik degeri giriniz:");
	scanf("%d",&yukseklik);
	alan(kenar,yukseklik);
	return 0;
}*/




void alan(float k)
{
	float u;
	float A;
	u=(k+k+k)/2;
	A=sqrt(u*(u-k)*(u-k)*(u-k));
	printf("Alan:%.2f\n",A);
}
int main(int argc, char *argv[]) {
	float k;
	printf("Kenar degerini giriniz:");
	scanf("%f",&k);
	alan(k);
	return 0;
}
