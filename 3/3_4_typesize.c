/*��ӡ���͵Ĵ�С*/
#include <stdio.h>
int main(void){
	printf("Type int has a size of %d bytes.\n",sizeof(int));
	printf("Type char has a size of %d bytes.\n",sizeof(char));
	printf("Type long has a size of %d bytes.\n",sizeof(long));
	printf("Type long long has a size of %d bytes.\n",sizeof(long long));
	printf("Type double has size of %d bytes.\n",sizeof(double));
	printf("Type long double has size of %d bytes.\n",sizeof(long double));
	//%zdת��˵��ƥ��sizeof�ķ�������; ������ֻ��ʹ��%d������� 
	return 0;
	
} 
