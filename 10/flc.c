#include <stdio.h>
#define COLS 4
int sum2d(const int ar[][COLS],int rows);
int sum(const int ar[],int n);

int main(void){
    int total1,total2,total3;
    int * pt1;
    int (*pt2) [COLS];

    pt1=(int[2]) {10,20};
    pt2=(int[2][COLS]) {{1,2,3,-9},{4,5,6,-8}};

    total1=sum(pt1,2);
    total2=sum2d(pt2,2);
    total3=sum((int []) {4,4,4,5,5,5 },6);
    printf("total1=%d\n",total1);
    printf("total2=%d\n",total2);
    printf("total3=%d\n",total3);


    return 0;
}

int sum2d(const int ar[][COLS],int rows){
    int i,j,result=0;
    for(i=0;i<rows;i++)
        for(j=0;j<COLS;j++) 
            result +=ar[i][j];
    return result;

}
int sum(const int ar[],int n){
    int i,result=0;
    for(i=0;i<n;i++) result +=ar[i];
    return result;
}
