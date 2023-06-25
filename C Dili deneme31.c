#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a1,a2,a3;
	printf("Uc adet aci giriniz:\n");
	scanf("%d%d%d",&a1,&a2,&a3);
	if((a1+a2+a2)==180)
	{
		if(a1==60 && a2==60 && a3==60)
		{
			printf("Ucgen eskenardir.\n");
		}
		else if(a1==a2 && a1!=a3 || a1==a3 && a1!=a2 || a2==a3 && a2!=a1)
		{
			printf("Ucgen ikizkenardir.\n");
		}
		else
		{
			printf("Ucgen cesitkenardir.\n");
		}
	}
	else
	{
		printf("Acilari ucgen aci kurallarina gore giriniz.\n");
	}
	return 0;
}
