#include <stdio.h>
int main(void){
	int number=256;
	unsigned width,precision;
	double weight=242.5;
	printf("please Enter a field width:\n");
	scanf("%d",&width);
	printf("The umber is :%*d:\n",width,number);
	printf("Now enter a width and precision:\n");
	scanf("%d %d",&width,&precision);
	printf("weight=%*.*f,\n",width,precision,weight);
	printf("Done!\n");

	return 0;
}
