#include<stdio.h>
#include<math.h>

#define PI 3.14159

int main()
{
	double r,h,c,sy,sq,vq,vz;
	
	printf("input r and h.\n");
	scanf("%lf %lf",&r,&h);
	
	c=2*PI*r;
	sy=PI*pow(r,2);
	sq=4*PI*pow(r,2);
	vq=4/3*PI*pow(r,3);
	vz=h*sy;
	
	printf("圆周长为%6.2f\n",c);
	printf("圆面积为%6.2f\n",sy);
	printf("圆球表面积为%6.2f\n",sq);
	printf("圆球体积为%6.2f\n",vq);
	printf("圆柱体积为%6.2f\n",vz);
	
	return 0;
}
