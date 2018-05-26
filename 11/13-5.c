#include <stdio.h>

char * search_str(char*,char);
char * s_gets(char*);
int main(void)
{
    char ch,targe;
    char soure[40];
    int i=3;
    for(i=0;i<3;i++){
        printf("please enter a source ")
}
  
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
