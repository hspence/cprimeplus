#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

struct names{
    char first[40];
    char last[40];
};

struct names staff[100];
int mycomp(const void * p1,const void *p2);

int main(void)
{
    int i;

    struct names list[SIZE]={{"hank","spence"},
        {"chen","zhihao"},
        {"chen","junyao"},
        {"chen","wenzun"},
        {"chen","weibin"},
        {"huang","guowei"},
        {"ling","shaofeng"},
        {"zhang","xiaowei"},
        {"nong","yaopeng"},
        {"wang","yan"}
    };

    printf("The origin name list:\n");
    for(i=0;i<SIZE;i++)
    {
        printf("%s %s \n",list[i].first,list[i].last); 
    }
    qsort(list,10,sizeof(struct names),mycomp);
    printf("The sorted name list:\n");
    for(i=0;i<SIZE;i++)
        printf("%s %s \n",list[i].first,list[i].last);

    return 0;
}
int mycomp(const void * p1,const void * p2)
{
    const struct names * ps1=(const struct names *) p1;
    const struct names * ps2=(const struct names *) p2;
    int ret;
    ret=strcmp(ps1->first,ps2->first);
    if(ret !=0)
        return ret;
    else
        return strcmp(ps1->last,ps2->last);
}



