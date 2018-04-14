/* 以两种方式显示float类型的值  */ 
#include <stdio.h>
int main(void){
	float aboat=32000.0;
	double abet =2.12e9;
	double dip = 5.32e-5;
	/*书上是double long类型， 但运行结果不正确，待解决*/ 
	printf("%f can be written %e\n",aboat,aboat);
	printf("And it 's %a in hexadecimal,powers of 2 notation\n",aboat);
	printf("%f can be written %e\n",abet,abet);
	printf("%lf can be written %Le \n",dip,dip);
	
	return 0;
	
}
