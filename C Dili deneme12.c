#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*int D[2][2]={{7,23},{20,22}};
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d. sutunun %d.sirasindaki sayi: %d\n",i,j,D[i][j]);	
		}
	}*/
	/*int arr[3][3];
	int i,j;
	printf("Enter an element for array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("arr[%d][%d] = %d\n",i,j,arr[i][j]);
		}
	}*/
	/*int a1[2][3]={{1,2,3},{4,5,6}};
	int a2[2][3]={{12,11,10},{9,8,7}};
	int a3[2][3];
	int i,j;

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			a3[i][j] = a1[i][j] + a2[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%4d",a3[i][j]);
			
		}
		printf("\n");
	}	*/
	/*	int a1[2][2]={{1,2},{4,5}};
	int a2[2][2]={{12,15},{8,5}};
	int a3[2][3];
	int i,j;

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			a3[i][j] = a1[i][j] + a2[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%4d",a3[i][j]);
			
		}
		printf("\n");
	}	*/
	/*int arr[10][10];
	int i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{		
			if(i==j)
			{
				arr[i][j]=1;
			}
			else
			{
				arr[i][j]=0;	
			}	
		}
	}

	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{		
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}*/
	int arr[10][10];
	int i,j;
	for(i=9;i>0;i--)
	{
		for(j=9;j>0;j--)
		{		
			if(i==j)
			{
				arr[i][j]=1;
			}
			else
			{
				arr[i][j]=0;	
			}	
		}
	}

	for(i=9;i>0;i--)
	{
		for(j=9;j>0;j--)
		{		
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
