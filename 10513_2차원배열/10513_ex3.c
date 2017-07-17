#include<stdio.h>
	int main(){
		int score[3][5]={0,},i,j;
		for(i=0;i<3;i++){
			printf("%d번 학생 정보 입력 : ",i+1);
			for(j=0;j<4;j++){
				scanf("%d",&score[i][j]);
			}
		}
		for(i=0;i<3;i++){
			for(j=1;j<4;j++){
				score[i][4]+=score[i][j];
			}
		}
		printf("\n====== 학생 정보 출력 ======\n");
		printf(" %4s %4s %4s %4s %4s\n","번호","영어","수학","프밍","총점");
		for(i=0;i<3;i++){
			for(j=0;j<5;j++){
				printf(" %4d",score[i][j]);
			}
		printf("\n");
	}
	}