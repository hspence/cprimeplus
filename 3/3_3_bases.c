#include <stdio.h>
int main(void){
	int x=100;
	
	printf("dec=%d;octal=%o;hex=%x\n",x,x,x);
	printf("dec=%d;octal=%#o;hex=%#x\n",x,x,x);
	/*注意在表示八进制和十六进制时，如20，表示为八进制024，十六进,0x14，
	注意前缀为数字0，但输出格式标识符%o为字母o；*/
	return 0;
}