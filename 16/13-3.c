#include <stdio.h>
#include <math.h>

struct pol_val{
    double x;
    double y;
};
struct rect_val{
    double magnitude;
    double angle;
};
struct pol_val rect_to_pol(struct rect_val *);

int main(void)
{
    struct rect_val rec;
    struct pol_val pol;

    printf("Enter the magnitude and angle(reg):\n");
    scanf("%lf %lf",&rec.magnitude,&rec.angle);
    pol=rect_to_pol(&rec);
    printf("The pol: x:%lf ,y:%lf\n",pol.x,pol.y);

    return 0;
}
struct pol_val rect_to_pol(struct rect_val * ret)
{
    struct pol_val pol;
    pol.x=(ret->magnitude*cos(ret->angle/180*(atan(1)*4)));
    pol.y=(ret->magnitude*sin(ret->angle/180*(atan(1)*4)));

    return pol;
}

