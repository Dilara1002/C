#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*void fbc(int n)
{
	int first=0,second=1,after;
	int i;
	for(i=0;i<=n;i++)
	{
		if(i<=1)
		{
			after=i;
		}
		else
		{
			after=first+second;
			first=second;
			second=after;
		}
		printf("%5d",after);
	}
}
int main(int argc, char *argv[]) {
	int number;
	printf("Enter a number for fibonacci series:");
	scanf("%d",&number);
	fbc(number);
	return 0;
}*/

/*void floyd(int n)
{
	int i,j,d=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%4d",d);
			d++;
		}
		/*j=1;
		while(j<=i)
		{
			printf("%3d",d);
			j++;
			d++;
			
		}*/
		/*printf("\n");
	}
}
int main(int argc, char *argv[]) {
	
	int num;
	printf("Enter a number for floyd trigon");
	scanf("%d",&num);
	floyd(num);
	
	return 0;
}*/

int max(int D[],int n)
{
	int max,i;
	max=D[0];
	for(i=0;i<n;i++)
	{
		if(D[i]>max)
		{
			max=D[i];
		}
	}
	return max;
}

int min(int D[],int n)
{
	int min,i;
	min=D[0];
	for(i=0;i<n;i++)
	{
		if(D[i]<min)
		{
			min=D[i];
		}
	}
	return min;
}
int main(int argc, char *argv[]) {
	
	int n,i;
	printf("How many numbers would you like to use:");
	scanf("%d",&n);
	int d[n];
	srand(time(0));
	for(i=0;i<n;i++)
	{
		d[i]=rand()%100;
		printf("%d\n",d[i]);
	}
	printf("Maximum Number:%d\n",max(d,n));
	printf("Minimum Number:%d\n",min(d,n));

return 0;
}	
