#include <stdio.h>
extern int count;
static int total=0;
void accumulate(int k); //此处可省略此次函数原型声明，因为没有调用该函数 

void accumulate(int k)
{
	static subtotal=0;
	if(k<=0)
	{
		printf("loop cycle: %d \n",count);
		printf("subtotal: %d , total: %d \n",subtotal,total);
		subtotal=0;
	 } 
	 else
	 {
	 	subtotal +=k;
	 	total +=k;
	 }
}
