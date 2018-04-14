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
	
	/*当给printf()函数传递参数时，如果该变量原本为大于打印格式
	标识符的类型时，会自动截取后位数的二进制表示的数值大小，以
	输出格式打印出来 如printf("big = %ld and not %hd\n",big,big);
	big原为long int 类型，所以转换为int ,后者会打印出来显示的是1*/ 
	
	return 0;
} 
