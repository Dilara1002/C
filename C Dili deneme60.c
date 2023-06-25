#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*void change(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	
}
int main(int argc, char *argv[]) {
	int a=10,b=20;
	printf("Before call:a:%d & b:%d\n",a,b);
	change(&a,&b);
	printf("After call:a:%d & b:%d\n",a,b);
	
	return 0;
}*/




/*int main(int argc, char *argv[]) {
	
	char c[100]="dilara";
	char *p;
	p=c;
	int i;
	for(i=0;i<c[i];i++)
	{
		printf("%d. character:'% c'\n",i,c[i]);
	}
	
	
	return 0;
}*/



/*int main(int argc, char *argv[]) {

	int t[100];
	int i;
	int *pt;
	
	for(pt=t;pt<t+100;pt++)
	{
		*pt=0;
		printf("%d\n",*pt);
	}


return 0;
}*/



/*int main(int argc, char *argv[]) {
	
	char name[10]={'b','o','n','j','o','u','r'};
	char *c;
	c=name;
	int i;
	for(i=0;i<name[i];i++)
	{
		printf("%c",*(c+i));
	}
	
	
	
	return 0;
}*/



int main(int argc, char *argv[]) {
	
	char word[10];
	char *p1,*p2;
	int control;
	printf("Enter a word that have maximun 10 character:");
	gets(word);
	for(p2=word;*p2;p2++);
	p2--;/*(Burada bir eksitmemizin sebebi'/0'dýr)*/
	control=1;
	for(p1=word;p1<p2;p1++,p2--)
	{
		if(*p1!=*p2)
		{
			control=0;
		}
	}
	if(control)
	{
		printf("%s is a polidrom word",word);
	}
	else
	{
		printf("%s is not a polindrom word",word);
	}
	
	return 0;
}
