#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
void show_array(const double ar[],int n);
double * new_d_array(int n,...);

int main(void)
{
    double * p1;
    double * p2;

    p1=new_d_array(5,1.2,2.3,3.4,4.5,5.6);
    p2=new_d_array(4,100.0,20.00,8.08,-1890.0);
    
    show_array(p1,5);
    show_array(p2,4);

    free(p1);
    free(p2);

    return 0;
}
void show_array(const double ar[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%9.4lf ",ar[i]);
    putchar('\n');

}
double * new_d_array(int lim,...)
{
    
    double * ptd=(double *) malloc(sizeof(double)*lim);

    va_list ap;//声明一个对象储存参数
    int i;

    va_start(ap,lim);//把ap初始化为参数列表
    for(i=0;i<lim;i++)
        ptd[i]=va_arg(ap,double);//一个个读取参数列表中的每一项
    
    va_end(ap);//清理工作

    return ptd;
}
