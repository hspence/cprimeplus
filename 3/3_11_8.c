#include <stdio.h>
int main(void){
	float pint,ounce,soup,tea,cup;
	printf("Please enter number of cup:");
	scanf("%f",&cup);
	pint=cup/2.0f;
	ounce=8.0f*cup;
	soup=ounce/2.0f;
	tea=soup/3.0f;
	printf("%.0f cup is equal to %.2f pint;\n",cup,pint);
	printf("%.0f cup is equal to %.2f ounce;\n",cup,ounce);
	printf("%.0f cup is equal to %.2f soup ladle;\n",cup,soup);
	printf("%.0f cup is equal to %.2f tea ladle;\n",cup,tea);
	
	return 0;
}
