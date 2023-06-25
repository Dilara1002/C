#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*void f()
{
	int i=1;
	while(i<=100)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}
int main(int argc, char *argv[]) {
	f();
	return 0;
}*/


void f()
{
	int i=1;
	while(i<=100)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}
int main(int argc, char *argv[]) {
	f();
	return 0;
}
