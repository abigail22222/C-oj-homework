#include<stdio.h>

int main()
{
 int i=1,n=0;
 
 scanf("%d",&n);
 
 while(i<n-1){     //�������һ������������ֻ��С��n����ônΪż������µ����һ��������� 
    printf("%d ",i);
    i=i+2;
  }
 
  if(n%2==0){    //�����ż���������ǰ��һ���� 
  	printf("%d",n-1);
   }else{printf("%d",n);}   //������������� 

 
 

 return 0;
}
