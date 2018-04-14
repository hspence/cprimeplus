#include <stdio.h>

int main(void){
   char ch;
   int i=1;
   while((ch=getchar())!='#'){
       if(ch!='\n'){
       printf("%c:%d ",ch,ch);
       }
       if(i%8==0){
           printf("\n");
        }
       i++;

       if(ch=='\n') i=1;
   }

       return 0; 
   
   
}
    

