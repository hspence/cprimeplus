/*ʹ��ת������ʾ�� */
#include <stdio.h>
int main(void){
	float salary;
	
	printf("\a Enter your desired monthly salary:");
	printf(" $_________\b\b\b\b\b\b\b");//\bΪ�˸� 
	scanf("%f",&salary);
	printf("\n\t$%.2f a month is $%.2f a year.",salary,salary*12.0);
	printf("\rGee! \n");//\r�ص���ǰ�е���ʼ�� 

	return 0;
} 
