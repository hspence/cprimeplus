#include <stdio.h>
int max(int *,int);

int main(void)
{
    int list[10] = 
    {1,35,63,7,4,5,35,6,3,6};
    printf("The max number is %d\n",max(list,10));
    return 0;
}

int max(int * list,int n)
{
   int i,max=list[0];
   for(i=0;i<n;i++)
       if(max<list[i]) max=list[i];
   return max;
}
