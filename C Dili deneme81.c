#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*int main(int argc, char *argv[]) {
	int *p1,*p2,t;
	p1=(int*)malloc(sizeof(int));
	p2=(int*)malloc(sizeof(int));
	printf("First Number:");
	scanf("%d",&*p1);
	printf("Second Number:");
	scanf("%d",&*p2);
	printf("\nNumber1:%d  Number2:%d",*p1,*p2);
	t=*p1;
	*p1=*p2;
	*p2=t;
	printf("\nNumber1:%d  Number2:%d",*p1,*p2);
	free(p1);
	free(p2);
	return 0;
}*/



/*int main(int argc, char *argv[]) {
	int *p1,*p2,n,i;
	int e=0,o=0;
	printf("Enter a value for n:");
	scanf("%d",&n);
	p1=(int*)malloc(n*sizeof(int));
	p2=(int*)malloc(n*sizeof(int));
	for(i=1;i<=n;i++){
		if(i%2!=0){
			*(p1+o)=i;
			o++;		
		}
		else{
			*(p2+e)=i;
			e++;	
		}
	}
		printf("Odd Numbers:\n");
	for(i=0;i<o;i++){
		printf("%d\n",*(p1+i));
	}
		printf("Even Numbers:\n");
	for(i=0;i<e;i++){
		printf("%d\n",*(p2+i));
	}
	free(p1);
	free(p2);
	return 0;
}*/





