#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*struct student{
	char name[10];
	char surname[10];
	int yas;
};
int main(int argc, char *argv[]) {
	struct student dilara;
	strcpy(dilara.name,"Dilara");
	strcpy(dilara.surname,"Sumer");
	dilara.yas=20;
	printf("%s \t %s \t %d \t",dilara.name,dilara.surname,dilara.yas);
	return 0;
}*/
 struct student_info{
 	int no;
 	char name[10];
 	char surname[10];
 	int yas;
 };
 struct student_info student_1,student_2;
 student_1.no=109;
 strcpy(student_info.name,"Dilara");
 strcpy(student_info.surname,"Sumer");
 student_1.yas=20;
 
 student_2=student_1;
