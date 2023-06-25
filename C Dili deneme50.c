#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop *//*141*/
void sirala(int d[],int m)
{
	int i,j,temp;
	
	for(i=0;i<m-1;i++)
	{
		for(j=0;j<m-1-i;j++)
		{
			if(d[i]>d[i+1])
			{
				temp=d[j];
				d[j]=d[j+1];
				d[j+1]=temp;
			}
		}
		
	}
}
int main(int argc, char *argv[]) {
	int n;
	int i;
	prinitf("Enter a number:");
	scanf("%d",&n);
	int a[100];
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100;
		printf("%d\n",a[i]);
	}
	
	printf("Siralanmis Sayilar:");
	sirala(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}



