#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*int arr[5]={12,98,54,67,30};
	int i;
	arr[1]=89;
	arr[3]=76;
	for(i=0;i<5;i++)
	{
		printf("arr[%d] = %d ",i,arr[i]);
		}	*/
	int numbers[3];
	int i;
	/*for(i=0;i<3;i++)
	{
		scanf("%d",&numbers[i]);
	}
	printf("---Numbers In Array---\n");
	for(i=0;i<3;i++)
	{
		printf("%d\n",numbers[i]);
	}*/
	i=0;
	/*while(i<3)
	{
		scanf("%d",&numbers[i]);
		i++;
	}
	printf("---Numbers In Arrray---\n");*/
	/*int j=0;
	while(j<3)
	{
		printf("%d\n",numbers[j]);
		j++;
	}*/
	/*i=0;/*Burada i'yi tekrar sýfýra eþitlememizin sebebi bir önceki while döngüsünden i'nin 3'e eþit olmasý ve bu yüzden 2. while döngüsüne giremeyeceðinden dolayý*/
	/*	while(i<3)
	{
		printf("%d\n",numbers[i]);
		i++;
	}*/
	do
	{
		scanf("%d",&numbers[i]);
		i++;	
	}while(i<3);
	printf("---Numbers In Arrray---\n");
	i=0;
	do
	{
		printf("%d\n",numbers[i]);
		i++;
	}while(i<3);
	return 0;
}
