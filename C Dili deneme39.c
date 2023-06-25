#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*int kare(int a)
{
	int sonuc=a*a;
	return sonuc;
}
int main(int argc, char *argv[]) {
	int x=4,karesi;
	karesi=kare(x);
	printf("%d\n",karesi);
	return 0;
}*/

/*void kare(int *sonuc,int *a)
{
	 *sonuc=*a**a;
	
}
int main(int argc, char *argv[]) {
	int x=4;
	int sonucum;
	kare(&sonucum,&x);
	printf("%d\n",sonucum);
	return 0;
}*/


/*int ust_al(int x,int y)
{
	int s=1,i;/*Çarpmanýn etkisiz elemaný 1.*/
	/*for(i=0;i<y;i++)
	{
		s=s*x;
	}
	return s;
}
int main(int argc, char *argv[]) {
	int x=4,y=5;
	int sonuc;
	sonuc=ust_al(x,y);
	printf("Sonuc:%d\n",sonuc);
	return 0;
	}	*/
	
	
void ust_al(int *s,int *x,int *y)
{
	int i;
	for(i=0;i<*y;i++)
	{
		*s=*s**x;
	}
}
int main(int argc, char *argv[]) {
	int x=4,y=5;
	int sonuc=1;
	ust_al(&sonuc,&x,&y);
	printf("Sonuc:%d\n",sonuc);
	return 0;
	}
