#include <stdio.h>
#include <math.h>
#define LEN 10
#define FSIZE 4

void transform(double * source,double * target,int n,double (*fp)(double f));
double fun1(double f);
double fun2(double f);

int main(void)
{
	int i,j;
	double source[LEN]={23.23,22.22,11,4,5.6,4.3,3.14,34.5,34.6,6.1};
	double target[LEN];
	double (*fun[FSIZE])(double)={sin,cos,fun1,fun2};
	
	printf("The source is :\n");
	for(i=0;i<LEN;i++)
	{
		printf("%.2f  ",source[i]);
	}
	printf("\n");
	for(i=0;i<FSIZE;i++)
	{
		transform(source,target,LEN,fun[i]);
		printf("The target is :\n");
		for(j=0;j<LEN;j++)
		{
			printf("%.2f  ",target[j]);
		}
		printf("\n");
	}
	return 0;
}

void transform(double * source,double * target,int n,double (*fp)(double f))
{
	int i;
	for(i=0;i<LEN;i++)
	{
		target[i]=(*fp)(source[i]);
	}
}
double fun1(double f)
{
	return f*2.0;
}
double fun2(double f)
{
	return f*-1;
}




















