#include <stdio.h>
#include <string.h>
#define MAXTITL 41
#define MAXAUTL 31
#define MAXBKS 100

char * s_gets(char * st,int n);

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library[MAXBKS];
    int count=0;
    int index;
    printf("Please enter the book title:\n");
    printf("Press [enter] at the start of a line to stop.\n");

    while(count<MAXBKS && s_gets(library[count].title,MAXTITL)!=NULL && library[count].title[0] !='\0')
    {
        printf("Now enter the author:\n");
        s_gets(library[count].author,MAXAUTL);
        printf("Now enter the value:\n");
        scanf("%f",&library[count].value);
        while(getchar()!='\n')
            continue;
        count++;
        if(count<MAXBKS)
            printf("Enter the next title:\n");
    }
    if(count>0)
    {
        printf("Here is the list of your book:\n");
        for(index=0;index<count;index++)
        {
            printf(" %30s :\"%40s\" ($%5.2f) ;\n",library[index].author,library[index].title,library[index].value);

        }
    }
    else
        printf("No book ? It is too bad.\n");
    printf("Done.\n");

    return 0;
}

char * s_gets(char * st,int n)
{
    char * ret_val;
    char * find;

    ret_val=fgets(st,n,stdin);
    if(ret_val)
    {
        find=strchr(st,'\n');
        if(find)
            *find='\0';
        else
            while(getchar()!='\n')
                continue;
    }
    return ret_val;
}
