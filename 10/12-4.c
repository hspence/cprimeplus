#include <stdio.h>
int main(void){

    int * ptr;
    int list[2][2]={12,14,16};
    ptr=list[0];
    printf("*ptr=%d,*(ptr+1)=%d,*(ptr+2)=%d\n",*ptr,*(ptr+1),*(ptr+2));

    return 0;
}
