#include <stdio.h>
#include <stdlib.h>
/*#define pi 3.14*/
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*float area(float r)
{
	float a1;
	a1=pi*r*r;
	return a1;
}
float around(float r)
{
	float a2;
	a2=2*pi*r;
	return a2;
}
int main(int argc, char *argv[]) {
	float r;
	float a1,a2;
	printf("Enter a radius:");
	scanf("%f",&r);
	a1=area(r);
	a2=around(r);
	printf("Area Of Circle:%.2f\n",a1);
	printf("Around Of Circle:%.2f\n",a2);
	return 0;
}*/



/*void change(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("New Numbers => x:%d & y:%d",x,y);
}
int main(int argc, char *argv[]) {
	int x,y;
	printf("Enter a number for x:");
	scanf("%d",&x);
	printf("Enter a number for y:");
	scanf("%d",&y);
	change(x,y);
	return 0;
}*/



/*void f(int bolunen,int bolen)
{
	int bolum ,kalan;
	bolum=bolunen/bolen;
	printf("Bolum:%d\n",bolum);
	kalan=bolunen% bolen;
	printf("Kalan:%d",kalan);
}

int main(int argc, char *argv[]) {
	int bolunen,bolen;
	printf("Bolunen icin deger giriniz:");
	scanf("%d",&bolunen);
	printf("Bolen icin deger giriniz:");
	scanf("%d",&bolen);
	f(bolunen,bolen);
	return 0;
}*/



/*void avrg(int d[], int n)
{
	int sum=0, aon=0;
	int i;
	for(i=0;i<n;i++)
	{
		sum+=d[i];
	}
	printf("\nSummation:%d\n",sum);
	aon=sum/n;
	printf("Average Of The Numbers:%d\n",aon);
}
int main(int argc, char *argv[]) {
	int n;
	printf("Enter a number for array:");
	scanf("%d",&n);
	int d[n];
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		d[i]=rand()%100;
		printf("%4d",d[i]);
	}
	avrg(d,n);
	return 0;
}*/




float avrg(int *d,int n)
{
	int i;
	int sum=0;
	for(i=0;i<n;i++)
	{
		sum+=d[i];
	}
	return (float)sum/n;	
}
int main(int argc, char *argv[]) {
	int n;
	float A;
	printf("Enter a number for array:");
	scanf("%d",&n);
	int d[n];
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		d[i]=rand()%100;
		printf("%4d",d[i]);
	}
	A=avrg(d,n);
	printf("\nAverage Of The Numbers:%.2f\n",A);
	return 0;
}
