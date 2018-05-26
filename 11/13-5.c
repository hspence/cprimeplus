#include <stdio.h>
#include <string.h>
#define QUIT '!'
char * search_str(char*,char);
char * s_gets(char*);

int main(void)
{
    char ch,targe;
    char source[40];
    char result[40];

    printf("Please enter a sentence to ba resource:\n");
    s_gets(source);
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

    num=strlen(string);
    while(count++<num)
    {
        if(*string==ch){
            flag=1;
            break
    }
        string++;
    }
    if(flag)
        return string;
    else
        return NULL;
}
char * s_gets(char *st)
{
    char * ret_val;
    int i=0;
    ret_val=fgets(st,40,stdin);
    if(ret_val)
    {
        while(st[i]!='\n'&&st[i]!='\0')
            i++;
        if(st[i]=='\n')
            st[i]='\0';
        while(getchar()!='\n')
            continue;

}
    return ret_val;

}
char s_getchar(){
    char ch;
    ch=getchar();
    while(getchar()!='\n')
        continue;
    return ch;
    int i=3;
}
