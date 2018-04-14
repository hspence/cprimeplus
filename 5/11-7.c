#include <stdio.h>
void fun(double a){
	printf("%.4lf",a*a*a);
	}
int main(void){
	double en;
	printf("please a double number:\n");
	scanf("%lf",&en);
	fun(en);

	return 0;
}
