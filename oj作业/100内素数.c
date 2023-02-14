#include<stdio.h>


int main()
{
	int prime;
	int i;
	for(prime=0;prime<100;prime++){
	
		if(prime==2){
			printf("2 ");
			continue;
		}
			for(i=2;i<prime;i++){
				if(prime%i==0){
					break;
				}else{
					printf("%d ",prime);
					break;
				}
		}
	}
	return 0;
 } 
