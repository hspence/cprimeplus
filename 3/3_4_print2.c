#include <stdio.h>
int main(void){
	unsigned int un=3000000000;
	short end =200;
	long big =65537;
	long long verybig=12345678908642;
	
	printf("un=%u and not %d\n",un,un);
	printf("end= %hd and %d \n",end,end);
	printf("big = %ld and not %hd\n",big,big);
	printf("verybig =%lld and not %ld\n",verybig,verybig);
	
	/*����printf()�������ݲ���ʱ������ñ���ԭ��Ϊ���ڴ�ӡ��ʽ
	��ʶ��������ʱ�����Զ���ȡ��λ���Ķ����Ʊ�ʾ����ֵ��С����
	�����ʽ��ӡ���� ��printf("big = %ld and not %hd\n",big,big);
	bigԭΪlong int ���ͣ�����ת��Ϊint ,���߻��ӡ������ʾ����1*/ 
	
	return 0;
} 
