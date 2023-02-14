#include<stdio.h>

int main()
{
	int a,x;
	scanf("%d",&a);
	if(a<0){
		x=a*-1;
		printf("fu ");
	}else{
		x=a;
	}
if(x>=-100000 && x<=100000){
		int t;
		int mask=1;
		t=x;
		while(t>9){
			t/=10;
			mask*=10;
		}///////////////////////////这个循环的目的是得到恰当的mask
	
	while(mask>0){
		int d=x/mask;////////////得到每一位数字 
		x%=mask;
		mask/=10;
		
		//printf("%d",d); 
		
		switch(d){
			case 0:printf("ling");break;
			case 1:printf("yi");break;
			case 2:printf("er");break;
			case 3:printf("san");break;
			case 4:printf("si");break;
			case 5:printf("wu");break;
			case 6:printf("liu");break;
			case 7:printf("qi");break;
			case 8:printf("ba");break;
			case 9:printf("jiu");break;
		}
		
			
		if(mask>0){
			printf(" ");
		}		
		
	}
}
	
 
	
	 
	return 0;
}
