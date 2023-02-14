#include <stdio.h>

int main()
{
	int n=0,sum=1,x=2;
	scanf("%d",&n);
	
	if(n<=1){
		printf("sum=1");
	}else{
		
		do{
		sum=sum+x;
		x=x+1;
		}while(x<=n);
		
		
		printf("sum=%d",sum);
		
		
	}
	
	return 0;
}
