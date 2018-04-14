#include <stdio.h>
#define toL 3.785
#define toKM 1.609
int main(void){

	float gas;
	float dis;
	printf("Please enter the distance:\n");
	scanf("%f",&dis);
	printf("please enter the gas;\n");
	scanf("%f",&gas);
	printf("%.1fgas/Mile\n",dis/gas);
	printf("%.1fL/Km\n",(toKM*dis)/(gas*toL));
	
	return 0;
}
	
