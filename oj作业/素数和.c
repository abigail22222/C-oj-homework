#include<stdio.h>
#include<math.h>
 
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	
	int cnt=0;
	int sum1=0,sum2=0;
	int x;////////////////////////x��Ҫ���Ե��� 
	for(x=2;cnt<m;x++){      /////////////////////////�����ĸ�������m�Ͳ��ܼ����� 
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
