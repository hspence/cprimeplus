/*使用转义序列示例 */
#include <stdio.h>
int main(void){
	float salary;
	
	printf("\a Enter your desired monthly salary:");
	printf(" $_________\b\b\b\b\b\b\b");//\b为退格 
	scanf("%f",&salary);
	printf("\n\t$%.2f a month is $%.2f a year.",salary,salary*12.0);
	printf("\rGee! \n");//\r回到当前行的起始处 

	return 0;
} 
