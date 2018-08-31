#include <stdio.h>
#include <string.h>
#define SIZE 40
#define QUIT "quit\n"

char * mystrncpy(char * p1,char * p2,int num);

int main(void)
{
    char s1[SIZE];
    char s2[SIZE];
    int num;

    printf("please input the first string :(\"quit\")to quit\n");
    while(strcmp(fgets(s1,SIZE,stdin),QUIT)) //因为fgets函数会在输入末端自动加入换行符'\n''
    {
       s1[strlen(s1)-1]='\0';
       printf("Input the second string:\n");
       fgets(s2,SIZE,stdin);
       printf("Please input the number of char copied from s2:");
       scanf("%d",&num);
       getchar();
       if(strlen(s2)>=num)
           s1[strlen(s1)+num]='\0';
       printf("the result is:\n");
       puts(mystrncpy(s1,s2,num));
       printf("Input the first string (type quit to quit):\n");
    }
    printf("OK,goodbye.");

    return 0;
}

char * mystrncpy(char * p1,char * p2,int n)
{
    char * p = p1;
    int i=1;

    while(*p1++)
        continue;
    * --p1 = *p2;
    while(i<n && *p2)
    {
        *++p1=*++p2;
        i++;
    }
    return p;
}

