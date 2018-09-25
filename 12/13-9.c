#include <stdio.h>
#include <stdlib.h>
char ** mal_n_words(int num);

int main(void)
{
    int num,i;
    char ** string;

    printf("How many words do you wish to enter?\n");
    scanf("%d",&num);
    printf("Now input the sentence:\n");
    string=mal_n_words(num);
    printf("Here are your words:\n");
    for(i=0;i<num;i++)
    {

        printf("%s\n",string[i]);
        free(string[i]);
    }
    free(string);
    return 0;
}

char ** mal_n_words(int num)
{

    int i;
    char **ptd;
    ptd=(char **) malloc(num*sizeof(char *));
    for(i=0;i<num;i++)
    {
        ptd[i]=(char *) malloc(40*sizeof(char));
        scanf("%s",ptd[i]);
    } 
    return ptd;
}
