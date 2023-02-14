#include<stdio.h>
#include<math.h>
 
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	
	int cnt=0;
	int sum1=0,sum2=0;
	int x;////////////////////////x是要测试的数 
	for(x=2;cnt<m;x++){      /////////////////////////素数的个数顶到m就不能继续了 
		int isprime=1;
		int i;
	
		for(i=2;i<x;i++){
			if(x%i==0){
				isprime=0;
				break;
			}
		}
		if(isprime==1){
			sum2+=x;
			cnt++;
			if(cnt<n){
				sum1+=x;
			}
		}
		
	} 
	
	printf("%d\n",sum2-sum1);
	
	return 0;
} 
