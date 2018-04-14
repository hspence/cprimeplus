#include <stdio.h>
int main(void){
	char name[20],first[20];
	printf("please enter your first name:\n");
	scanf("%s",first);
	printf("Please enter your second name:\n");
	scanf("%s",name);
	printf("%s,%s\n",first,name);
	printf("%20s,%20s\n",first,name);
	printf("%-20s,%-20s\n",first,name);
	printf("%3s,%3s\n",first,name);
	float fnum;
	printf("Please enter a number :\n");
	scanf("%f",&fnum);
	printf("输入%.1f或%.1e;\n",fnum,fnum);
	printf("输入%+.3f或%.3e;\n",fnum,fnum);
	

	return 0;
}
