#include <stdio.h>
#include<math.h>

int main()
{
	double r1=0.015,r2=0.021,r3=0.0275,r5=0.03,r=0.0035;
	double p1,p2,p3,p4,p5;
	
	p1=1000*(1+5*r5);
	p2=1000*(1+2*r2)*(1+3*r3);
	p3=1000*(1+3*r3)*(1+2*r2);
	p4=1000*pow(1+r1,5);
	p5=1000*pow(1+r/4,4*5);
	
	printf("%f,%f,%f,%f,%f\n",p1,p2,p3,p4,p5);
	
	
	return 0;
 } 
