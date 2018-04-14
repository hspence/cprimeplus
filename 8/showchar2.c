#include <stdio.h>
void display(char ch,int row,int col);
int main(void){
    int ch,row,col;
    printf("please enter a character and two integers:\n");
    
    while((ch=getchar())!='\n'){
        if(scanf("%d %d",row,col)!=2) break;
        display(ch,row,col);
        while(getchar()!='\n') continue;
        printf("Enter another character and two intergers:\n");
        printf("Enter a newline to quit.\n");


}
    printf("bye.\n");

    return 0;
}

void display(char ch,int row,int col){

    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            putchar(ch);
        }

       putchar('\n');
    }
}
