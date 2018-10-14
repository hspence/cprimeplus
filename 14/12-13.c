#include <stdio.h>
// one way..
double fun1(double d1,double d2);
double fun2(double d1,double d2);
double fun3(double d1,double d2);
double fun4(double d1,double d2);

int main(void)
{
	double (*pt [4])(double d1,double d2)={fun1,fun2,fun3,fun4};
// another way
	typedef double (*ptype) (double,double);
	ptype pt2[4]={fun1,fun2,fun3,fun4};
	printf("%f",pt2[2](12.3,9.0));
	return 0;	
} 
double fun1(double d1,double d2)
{
	return d1*d2;
}
double fun2(double d1,double d2)
{
	return d1+d2;
}
double fun3(double d1,double d2)
{
	return d1-d2;
}
double fun4(double d1,double d2)
{
	return d1/d2;
}
