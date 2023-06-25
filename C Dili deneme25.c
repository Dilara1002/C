#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float k1,k2,y1,y2;
	float hacim;
	int p;
	printf("Bes tane havuz bulunmaktadir.Kacinci havuzu istiyorsaniz numarasini giriniz:\n");
	scanf("%d",&p);
	switch(p)
	{
		case 1:printf("Prizmaniz Silindir\n:");
		break;
		case 2:printf("Prizmaniz Karedir:\n");
		break;
		case 3:printf("Prizmaniz Dikdortgendir:\n");
		break;
		case 4:printf("Prizmaniz Ucgendir:\n");
		break;
		case 5:printf("Prizmaniz Besgendir:\n");
		break;
		default:printf("Boyle bir havuz bulunmamaktadir.\n");
		break;
	}
	
	if(p==1)
	{
		printf("Yaricap uzunlugunu giriniz:");
		scanf("%f",&k1);
		printf("Yuksekligi giriniz:");
		scanf("%f",&y1);
		hacim=PI*k1*k1*y1;
		printf("Hacim:%.2f\n",hacim);
	}
	else if(p==2)
	{
		printf("Tabanin kenar uzunlugunu giriniz:");
		scanf("%f",&k1);
		printf("Yuksekligi giriniz:");
		scanf("%f",&y1);
		hacim=k1*k1*y1;
		printf("Hacim:%.2f\n",hacim);
	}
	else if(p==3)
	{
	
		printf("Tabanin kenar uzunlugunu giriniz:");
		scanf("%f",&k1);
		printf("Tabanin diger kenar uzunlugunu giriniz:");
		scanf("%f",&k2);
		printf("Yuksekligi giriniz:");
		scanf("%f",&y1);
		hacim=k1*k2*y1;
		printf("Hacim:%.2f\n",hacim);
	}
	else if(p==4)
	{
		printf("Tabanin kenar uzunlugunu giriniz:");
		scanf("%f",&k1);
		printf("Tabanin yuksekligini giriniz:");
		scanf("%f",&y2);
		printf("Yuksekligi giriniz:");
		scanf("%f",&y1);
		hacim=((k1*y2)/2)*y1;
		printf("Hacim:%.2f\n",hacim);
	}
	else if(p==5)
	{
		printf("Tabanin kenar uzunlugunu giriniz:");
		scanf("%f",&k1);
		printf("Tabanin yuksekligini giriniz:");
		scanf("%f",&y2);
		printf("Yuksekligi giriniz:");
		scanf("%f",&y1);
		hacim=(((k1*5)*y2)/2)*y1;
		printf("Hacim:%.2f\n",hacim);
	}
	return 0;
}

