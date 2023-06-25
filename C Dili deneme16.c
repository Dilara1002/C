#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int a,b,h;
	int basearea;
	int sidearea;
	int wholearea;
	int volume;
	printf("Enter a number for a:");
	scanf("%d",&a);
	printf("Enter a number for b:");
	scanf("%d",&b);
	printf("Enter a number for h:");
	scanf("%d",&h);
	basearea=a*b;
	printf("Base Area: %d\n",basearea);
	sidearea=2*a*h + 2*b*h;
	printf("Side Areas: %d\n",sidearea);
	wholearea=2*basearea + sidearea;
	printf("The Whole Area Of The Rectengular Prism: %d\n",wholearea);
	volume=a*b*h;
	printf("The Vlume Of The Rectengular Prism: %d",volume);
	return 0;
}
