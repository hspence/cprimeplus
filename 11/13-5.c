#include <stdio.h>
#include <string.h>
#define QUIT '!'
char * search_str(char*,char);
char s_getchar();
int main(void)
{
    char targe;
    char source[40];
    char * result;

    printf("Please enter a sentence to ba resource:\n");
    fgets(source,40,stdin);
    printf("Please enter a char to serch:\n");
    targe=s_getchar();
    while(targe!=QUIT){
        
    result=search_str(source,targe);
    if(result)
        printf("The search result is %s \n",result);
    else
        printf("Not found!\n");
    printf("Please enter a char to serch:\n");
    targe=s_getchar();

}
    printf("End goodbye!\n");
  
    return 0;
}

char * search_str(char * string,char ch)
{
    int count=0;
    int num;
    int flag=0;
    num=strlen(string);
    while(count++<num)
    {
        if(*string==ch){
            flag=1;
            break;
    }
        string++;
    }
    if(flag)
        return string;
    else
        return NULL;
}

char s_getchar(){
    char ch;
    ch=getchar();
    while(getchar()!='\n')
        continue;
    return ch;
}
