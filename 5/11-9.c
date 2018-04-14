#include <stdio.h>
void temp(double x){
	const double ca=273.16;
	double c,k;
	c=(5.0/9.0)*(x-32.0);
	k=c+ca;
	printf("%.2lf'c,%.2lf'k\n",c,k);
	}	
int main(void){
	double k;
	while(scanf("%lf",&k)==1){
	temp(k);
}
	return 0;
}
