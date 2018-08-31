#include <stdio.h>
#include <string.h>
#define QUIT "quit\n"
#define SIZE 40

char * string_in(char *,char *);

int main(void)
{
    char * ret_val;
    char s1[SIZE],s2[SIZE];
    printf("please input first string (input \'quit\'to quit):\n");
    while(strcmp(fgets(s1,SIZE,stdin),QUIT))
    {
        printf("please input second string:\n");
        fgets(s2,SIZE,stdin);
        s2[strlen(s2)-1]='\0';
        ret_val=string_in(s1,s2);
        if(ret_val)
            printf("Find it! it is %s\n",ret_val);
        else
            printf("NO find !\n");
    
        printf("please input first string (input \'quit\'to quit):\n");
    }

    return 0;
}

char * string_in(char * s1,char *s2)
{
    int i;
    while(*s1)
    {
        i=0;
        while(s1[i]==s2[i])
        {
            i++;
            if(!s2[i])
                return s1;
        }
        
        s1++;
    }
    return NULL;
}
