#include <stdio.h>
#include <math.h>

int main(void){
	double num,i,sum1,sum2;
	printf("please enter times:\n");
	while(scanf("%lf",&num)){
	for(sum1=0,sum2=0,i=0;i<num;i++){

	sum1=sum1+1.0/(i+1.0);
	sum2=sum2+(1.0/(i+1.0))*pow(-1,i);

}
	printf("The result 1 is %lf\nThe result 2 is %lf\n",sum1,sum2);
	printf("please enter times:\n");
}
	return 0;
	}
