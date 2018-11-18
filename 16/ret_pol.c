#include <stdio.h>
#include <math.h>

#define RAD_TO_EDG (180/(4*atan(1)))

typedef struct polar_v {
	double magnitude;
	double angle;
} Polar_v;

typedef struct rect_v {
	double x;
	double y;
} Rect_v;

Polar_v rect_to_polar(Rect_v);

int main(void)
{	
	Rect_v input;
	Polar_v result;
	
	printf("Enter x and y coordinates; (enter q to quit\n");
	while(scanf("%lf %lf",&input.x,&input.y)==2)
	{
		result=rect_to_polar(input);
		printf("Magnitude =%0.2f,angle = %0.2f \n",result.magnitude,result.angle);
		printf("Enter x and y coordinates; (enter q to quit\n");
	}
	puts("Bye.");
	
	return 0;
}

Polar_v rect_to_polar(Rect_v rv)
{
	Polar_v pol;
	pol.magnitude=sqrt(rv.x*rv.x+rv.y*rv.y);
	if(pol.magnitude==0)
		pol.angle=0.0;
	else
		pol.angle=(atan2(rv.y,rv.x)*RAD_TO_EDG);
	
	return pol;
}




























