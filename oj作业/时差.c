#include <stdio.h>

int main()
{
	int hour1=0,minute1=0;
	int hour2=0,minute2=0;
	

	printf("��������Ҫ���ʱ��\n");
	
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	
	int time1=hour2*60+minute2;
	int time2=hour1*60+minute1;
	int t=time2-time1;

    printf("ʱ��Ϊ%dСʱ%d��",t/60,t%60);
	
	return 0;
}
