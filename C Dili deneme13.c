#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*int d[3][3][3]={{{1,3,5},{2,4,6},{3,6,9}},{{4,8,12},{5,10,15},{6,12,18}},{{7,14,21},{8,16,24},{9,18,27}}};
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("d[%d][%d][%d] = %d\n",i,j,k,d[i][j][k]);
			}
		}
	}*/

	int arr[2][3][2];
	int i,j,k;
	printf("Enter 12 elements:\n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<2;k++)
			{
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				for(k=0;k<2;k++)
				{
					printf("arr[%d][%d][%d] = %d\n",i,j,k,arr[i][j][k]);
				}
			}
		}
	
	return 0;
}
