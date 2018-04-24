#include <stdio.h>
void fun(double *,int);

int main(void)
{
    int i,n=10;
    double list[10]={1.3,2.1,3.2,4.2,5.6,6.2,7.4,8.2,9.4,10.3};
    for(i=0;i<n;i++) printf("%.1lf ",list[i]);
    putchar('\n');
    fun(list,10);
    for(i=0;i<n;i++) printf("%.1lf ",list[i]);
    putchar('\n');

    return 0;
}

void fun(double *list,int n)
{
   double temp;
   int i;
   for(i=0;i<=(n/2);i++){
       temp=list[n-i-1];

       list[n-i-1]=list[i];
       list[i]=temp;

    }
}
