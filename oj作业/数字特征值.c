#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int n=0;
	int cnt=0;
	int t;
	int i=1;
	
	do{
		t=x%10; 
		cnt=cnt+1;
		x/=10;
////////////////////////////////�õ���t,Ҫ��t��cnt�Ƚ�����
			int db;
			if(cnt%2!=0){
				if(t%2==0){
					db=0;
				}else{
					db=1;
				}
			} else{
				if(t%2==0){
					db=1;
				}else{
					db=0;
				}
			}
///////////////////////////////////�õ���db��ֵ����������
		n=n+db*i;
		i=i*2;
		
		
	}while(x>0);
	
	printf("%d",n);
	
	
	
	
	return 0;
}
