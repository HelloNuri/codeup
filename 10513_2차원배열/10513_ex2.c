#include<stdio.h>
int main(){
	int score[2][4]={{2,4,6},{8,10,12}},i,j,sum=0,k;
	for(i=0;i<2;i++){
		k=1;
		for(j=0;j<3;j++){
			k*=score[i][j];
		}
		score[i][3]=k;
	}
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			printf("%4d",score[i][j]);
		}
		printf("\n");
	}
}