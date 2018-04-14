#include <stdio.h>
#include <ctype.h>

int main(void){
    char ch;
    int numspace=0;
    int numofline=1;
    int numofchar=0;

    printf("enter some text to analysis:\n");
    while((ch=getchar())!='#'){
        if(ch=='\n'){
            numofline++;
            continue;}
        if(isspace(ch)){
            numspace++;
            continue;
        }
       numofchar++; 
    }
    printf("The text has %d line,%d char ,%d space\n",numofline,numofchar,numspace);
    
    return 0;
}
