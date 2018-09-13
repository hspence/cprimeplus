#include <stdio.h>
#include <stdlib.h>
float fun(float,int);
int main(int argc,char * argv[])
{
	double di;
	int times;
	di=atof(argv[1]);
	times=atoi(argv[2]);
	printf("The result is %.2f \n",fun(di,times));
	return 0;
 } 
 float fun(float di,int times)
 {
 	if(times>1)
 		return di*fun(di,times-1);
 	else
 		return di;
 }
