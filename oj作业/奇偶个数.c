#include <stdio.h>
 int main()
{
 	int number,js=0,os=0;
 	scanf("%d",&number);
 	
 	while(number!=-1)
 	{
 		if(number%2==0)
 		{
 			os++;
		}
		else
		{
			js++;
		}
 		
 	   scanf("%d",&number);
 		
	}
 	
 	printf("%d %d",js,os);
 	
 	return 0;
} 
