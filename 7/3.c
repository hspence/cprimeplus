#include <stdio.h>
int main(void){
    char ch;
    int cache,i=0,j=0,sum1=0,sum2=0;
    while((ch=getchar())!='0'){
        cache=(int)ch-48;
        if(cache%2==0){
            i++;
            sum1=sum1+cache;
    }
        else
            j++;
            sum2=sum2+cache;
}
    printf("odd:%d,div:%d,\njishu:%d,div:%d",i,sum1/i,j,sum2/j);

    return 0;

}
