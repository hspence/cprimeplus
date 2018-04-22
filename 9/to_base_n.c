#include <stdio.h>
void to_base(int,int);

int main(void){

    int num,n;
    printf("Please enter two integer to :\n");

    while(scanf("%d %d",&num,&n)==2){
        printf("Binary equvalent:");
        to_base(num,n);
        putchar('\n');
        printf("Please enter two integer:\n(q to quit)");
}
    printf("Done\n");

    return 0;
}

void to_base(int num,int n){
    int temp,list[64],i=0; 
    while(num>0){
        list[i]=num%n;
        num /= n;
        i++;
}
    for(i--;i>=0;i--) printf("%d",list[i]);


}
