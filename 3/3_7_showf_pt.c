/* �����ַ�ʽ��ʾfloat���͵�ֵ  */ 
#include <stdio.h>
int main(void){
	float aboat=32000.0;
	double abet =2.12e9;
	double dip = 5.32e-5;
	/*������double long���ͣ� �����н������ȷ�������*/ 
	printf("%f can be written %e\n",aboat,aboat);
	printf("And it 's %a in hexadecimal,powers of 2 notation\n",aboat);
	printf("%f can be written %e\n",abet,abet);
	printf("%lf can be written %Le \n",dip,dip);
	
	return 0;
	
}
