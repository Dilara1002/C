#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//1
/*
int sum(int num){
	
	if(num==1){
		return 1;
	}
	else{
		return num+sum(num-1);
	}
}
int main(int argc, char *argv[]) {
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Summation Result:%d\n",sum(n));
	return 0;
}*/

//2
/*
int multi(int x,int y){
	int result;
	if(y==1){
		result=x;
	}
	else{
		result=x+multi(x,(y-1));
	}
	return result;
}
int main(int argc, char *argv[]) {
	int a,b;
	printf("Enter a number for a:");
	scanf("%d",&a);
	printf("Enter a number for b:");
	scanf("%d",&b);
	printf("%d x %d = %d\n",a,b,multi(a,b));
	
}*/

//3
/*
int fact(int m){
	int result;
	if(m==0){
		return 1;
	}
	else{
		result= m*fact(m-1);
	}
	return result;
}
int main(int argc, char *argv[]) {
	int n;
	printf("n:");
	scanf("%d",&n);
	printf("%d!=%d\n",n,fact(n));

}*/

//4
/*
void Odd_List(int m,int z){
	if(m<=z){
		printf("%d\n",m);
		Odd_List(m+2,z);
	}
}
int main(int argc, char *argv[]) {
	int n,r;
	printf("n:");
	scanf("%d",&n);
	if(n%2==1)
	{
		r=n;		
	}
	else{
		r=n;
	}
	Odd_List(1,r);

}*/

//5
/*void list_even_numbers(int start, int end) {
    if (start > end) {  // Base case: stop recursion when start exceeds end
        return;
    }
    if (start % 2 != 1) {  // Recursive case: print odd number and call function with incremented start value
        printf("%d ", start);
        list_even_numbers(start + 2, end);
    } else {  // Recursive case: increment start value and call function
        list_even_numbers(start + 1, end);
    }
}

int main() {
    int start, end;
    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);
    printf("Even numbers between %d and %d are: ", start, end);
    list_even_numbers(start, end);
    return 0;
}*/



