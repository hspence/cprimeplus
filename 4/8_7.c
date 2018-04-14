#include <stdio.h>
#include <float.h>
int main(void){
	double d=1.0/3.0;
	float f=1.0/3.0;
	printf("%.6lf,%.12lf,%.16lf\n",d,d,d);
	printf("%.6f,%.12f,%.16f\n",f,f,f);
	printf("flt_dig=%d\n",FLT_DIG);
	printf("dbl_dig=%d\n",DBL_DIG);
		
	return 0;
}
