#include<stdio.h>

int main()
{
	const int size=10;
	int yh[size][size];
	int i,j;
	for(i=0;i<size;i++){//////////初始化 
		for(j=0;j<size;j++){
			yh[i][j]=0;
		}
	} 
	for(i=0;i<size;i++){
		yh[i][i]=1;////////////让每一行的第一个和最后一个等于1 
		yh[i][0]=1;
	}
	
	for(i=2;i<size;i++){
		for(j=1;j<i;j++){
			yh[i][j]=yh[i-1][j-1]+yh[i-1][j];//////////杨辉三角的规律 
		}
	}
	
	
	for(i=0;i<size;i++){
		for(j=0;j<=i;j++){
			printf("%4d",yh[i][j]);
		}
		printf("\n");
	} 
	
	return 0;
}
