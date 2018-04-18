#include <stdio.h>
int max(int,int,int);

int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("max =%d\n",max(a,b,c));

    return 0;

}

int max(int a,int b,int c){
    int max=a;
    if(a<b) max=b;
    if(max<c) max=c;

    return max;
}
