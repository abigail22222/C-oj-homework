#include<stdio.h>

int main()
{
	const int size=10;
	int yh[size][size];
	int i,j;
	for(i=0;i<size;i++){//////////��ʼ�� 
		for(j=0;j<size;j++){
			yh[i][j]=0;
		}
	} 
	for(i=0;i<size;i++){
		yh[i][i]=1;////////////��ÿһ�еĵ�һ�������һ������1 
		yh[i][0]=1;
	}
	
	for(i=2;i<size;i++){
		for(j=1;j<i;j++){
			yh[i][j]=yh[i-1][j-1]+yh[i-1][j];//////////������ǵĹ��� 
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
