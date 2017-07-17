#include<stdio.h>
	int main(){
		int i,j,num[5][5]={0},c=1;
		
		for(i=0;i<5;i++){
		for(j=0;j<5;j++,c++)
			num[j][i]=c;
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++)
			printf("%-3d",num[i][j]);
	printf("\n");
	
	}
	}