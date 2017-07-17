#include<stdio.h>
	int main() {
		int a[2][3]={3,5,8,2,7,6};
		int b[2][3]={6,8,12,5,1,9};
		int c[2][3]={0};
		int i,j;
		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 3; j++)
			{
				c[i][j]=a[i][j]+b[i][j];
				printf("%3d",c[i][j]);
			}
			printf("\n");
		}
	}