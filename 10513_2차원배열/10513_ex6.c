#include<stdio.h>
	int main(){
	int i,j,c=1;
	int num[5][5]={0};
	
	for(i=4;i>=0;i--){
		for(j=0;j<=i;j++,c+=2)
			num[4-i][4-i+j]=c;
	}
	for(i=4;i>=0;i--){
		for(j=0;j<5;j++){
			if(num[4-i][j]==0)
				printf("   ");
			else
			printf("%-3d",num[4-i][j]);
		}
	printf("\n");
	}
	}