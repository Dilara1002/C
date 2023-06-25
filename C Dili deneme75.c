#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct StudentType{
	int no;
	char answer[10];
};
struct ScoreType{
	int no;
	int score;
};

int main(int argc, char *argv[]) {
	struct StudentType st[10];
	struct ScoreType sc[10];
	char key[10],l;
	int i,j;
	int t,f;
	printf("Answer Key:\n");
	for(i=0;i<10;i++){
		scanf("%s",&key[i]);
	}
	printf("Information Of Student:\n");
	for(j=0;j<10;j++){
		printf("No:\n");
		scanf("%d",&st[j].no);
		t=f=0;
		scanf("%c",&l);
		for(i=0;i<10;i++){
			
			scanf("%s",&st[j].answer[i]);
			
			if(key[i]==st[j].answer[i]){
				t++;
			}
			else if(st[j].answer[i]!=' '){
				f++;
			}
		}
		sc[j].no=st[j].no;
		printf("True:%d  False:%d\n",t,f);
		sc[j].score=t-(f/4);
	}
	for(j=0;j<10;j++){
		printf("Student No:%d  Student Score:%d\n",sc[j].no,sc[j].score);
	}
	return 0;
}
