#include<stdio.h>

int main()
{
	int arr[3][3]={{1,4,5},{3,6,4},{4,5,5}};
	int i,j;
	int sum1=0,sum2=0;
	for(i=0;i<3;i++){
		sum1=sum1+arr[i][i];
	}
	for(j=0;j<3;j++){
		sum2=sum2+arr[3-j-1][j]; 
	}
	printf("%d",sum1+sum2);

	return 0;
}
