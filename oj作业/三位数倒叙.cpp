#include <stdio.h>

int main()
{
	int thr=0;
	
	scanf("%d",&thr);
	
	int bai=thr/100;
	int shi=thr/10%10;
	int ge= thr%10;
	int dao=ge*100+shi*10+bai;
	
	printf("%d",dao);
	
	return  0;
}
