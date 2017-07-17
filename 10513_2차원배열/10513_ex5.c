#include<stdio.h>
	int main(){
	int i,j,c=1;
	int num[5][5]={0};
	
	for(i=4;i>=0;i--){
		for(j=0;j<=i;j++,c++)
			num[4-i][j]=c;
	}
	for(i=4;i>=0;i--){
		for(j=0;j<=i;j++)
			printf("%-3d",num[4-i][j]);
	printf("\n");
	}
}