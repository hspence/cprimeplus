#include <stdio.h>
void fun(const int *,const int *,int *,int);

int main(void)
{
    int i;
    int list[5]={23,43,54,7,3};
    int list2[5]={23,432,5,5,3};
    int result[5];
    fun(list,list2,result,5);
    for(i=0;i<5;i++) printf("%d ",result[i]);
    putchar('\n');

    return 0;
}

void fun(const int * list1,const int * list2,int * result,int m)
{
    int i;
    for(i=0;i<m;i++) result[i]=list1[i]+list2[i];
    printf("The function is end.\n");
}
