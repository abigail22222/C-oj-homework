#include<stdio.h>

int main()
{
 int i=1,n=0;
 
 scanf("%d",&n);
 
 while(i<n-1){     //不让最后一个数输出，如果只是小于n，那么n为偶数情况下的最后一个数会输出 
    printf("%d ",i);
    i=i+2;
  }
 
  if(n%2==0){    //如果是偶数，就输出前面一个数 
  	printf("%d",n-1);
   }else{printf("%d",n);}   //否则输出它本身 

 
 

 return 0;
}
