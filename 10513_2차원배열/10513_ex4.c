#include<stdio.h>
int main(){
	int i,j,c;
	int num[5][5]={0};
	c=1;
	for(i=0;i<5;i++){
		for(j=0;j<=i;j++,c++)
			num[i][j]=c;
	}
	for(i=0;i<5;i++){
		for(j=0;j<=i;j++)
			printf("%-3d",num[i][j]);
	printf("\n");
	}
}